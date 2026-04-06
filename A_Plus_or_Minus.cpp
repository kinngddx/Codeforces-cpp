#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        vector<int> ahad={a,b,c};
       
        if(ahad[0]-ahad[1]==ahad[2]){
            cout<<'-'<<endl;
        }else if(ahad[0]+ahad[1]==ahad[2]){
            cout<<'+'<<endl;
        }


    }
    
    
    return 0;
}