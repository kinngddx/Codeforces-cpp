#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> box(n);
        for(int i =0;i<n;i++){
            cin>>box[i];
        }

        // sort(box.begin(),box.end());
        if(k==1 & is_sorted(box.begin(),box.end()) || k>=2){
            cout<<"YES"<<endl;
            


    } else {
        cout<<"NO"<<endl;
    }

}
    
    
    return 0;
}