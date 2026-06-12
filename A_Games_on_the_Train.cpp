#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int maxi = 0;
    int  mini = 7;
    for(int i= 0;i<n;i++){
        int h;
        cin>>h;
        if(h>maxi) maxi = h;
        if(h<mini) mini = h;

    }

    cout<<maxi-mini+1<<endl;
    
}
int main() {

    int t;
    // cin >>t;
    if(cin>>t){

    
    while(t--){
        solve();
    }
    
}
    return 0;
}