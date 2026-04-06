#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int ans = ((c*(c+1))/2)*a;
    int umang = ans-b;
    if(umang<=0){
        cout<<0<<endl;
    }else{

    
    cout<<umang<<endl;
    }
    
    return 0;
}