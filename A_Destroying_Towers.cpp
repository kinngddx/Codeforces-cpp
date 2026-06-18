#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long ans= 0,mn=2e9;
        for(int i =0;i<n;i++){
            long long a;
            cin>>a;
            mn = min(mn,a);
            ans+=mn;
        }

        cout<<ans<<endl;
    }
    
    return 0;
}
