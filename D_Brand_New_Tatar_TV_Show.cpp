#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        vector<int>a(n);
        for(auto&x:a)scanf("%d",&x);
        sort(a.begin(),a.end());
        
        vector<int>blocks;
        int i=0;
        while(i<n){
            int j=i;
            while(j+1<n && a[j+1]-a[j]<=k) j++;
            blocks.push_back(j-i+1);
            i=j+1;
        }
        
        int xorAll=0;
        for(int b:blocks) xorAll ^= (b%2);
        
        // Track starting index of each block in sorted array
        vector<int> blockStart;
        i=0;
        for(int b:blocks){
            blockStart.push_back(i);
            i+=b;
        }
        
        bool found=false;
        for(int bi=0;bi<(int)blocks.size()&&!found;bi++){
            int sz=blocks[bi];
            int base=blockStart[bi];
            int g = sz%2;
            // Remove current block's contribution
            int xorWithout = xorAll ^ g;
            
            for(int pos=0;pos<sz&&!found;pos++){
                int left=pos;        // elements before pos in block
                int right=sz-pos-1; // elements after pos in block
                
                // Check if left and right sub-blocks merge
                // They're separated by removed element a[base+pos]
                // left block ends at a[base+pos-1], right starts at a[base+pos+1]
                int newG=0;
                if(left>0 && right>0 && a[base+pos+1]-a[base+pos-1]<=k){
                    // They merge into one block
                    newG=(left+right)%2;
                } else {
                    newG=(left%2)^(right%2);
                }
                
                int finalXor = xorWithout ^ newG;
                if(finalXor==0) found=true;
            }
        }
        puts(found?"YES":"NO");
    }
}