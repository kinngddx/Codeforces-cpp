#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    long long ans = LLONG_MAX;
    for(int i =0;i<n;i++){
        long long x;
        cin>>x;
        ans = min (ans,abs(x));
    }

    cout<<ans<<endl;
    
    return 0;
}