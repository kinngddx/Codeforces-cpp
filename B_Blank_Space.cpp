#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>box(n);
        for(int i = 0;i<n;i++){
            cin>>box[i];
        }
int maxi = 0;
int count = 0;



        for(int i = 0;i<n;i++){
            if(box[i]==0){
                count++;
                maxi = max(maxi,count);


            }else {
                count = 0;
            }
        }

        cout<<maxi<<endl;
    }
    
    return 0;
}