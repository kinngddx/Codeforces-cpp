#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }

        if(arr[0]==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }


    
 //unorderder map bhi use kr skte hai aaaram se bc
 //2 types ke nubmerr hi rhnege to dono ko count kro and unka difference <=1 hona chaiyyye      


}
    
    return 0;
}