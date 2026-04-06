#include<bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--){
    char a;
    cin>>a;
     string str = "codeforces";
    vector<char> umang(str.begin(), str.end());
    bool uma = false;
    for(int i =0;i<umang.size();i++){
        if(umang[i]==a){
            cout<<"YES"<<endl;
            uma=true;
            break;
        }

        

    }
    if(!uma){
    cout<<"NO"<<endl;
    }
 }   
    return 0;
}