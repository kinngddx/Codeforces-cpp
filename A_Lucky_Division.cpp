#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin>>n;
        bool check = false;
    if(n%4==0 || n%7==0){
        cout<<"YES"<<endl;
    
    }else {
    string s = to_string(n);
    vector<int> umang;

    for(auto c:s){
        umang.push_back(c-'0');
    } 
    for (int i = 0; i < umang.size(); i++)
    {
       if(umang[i]==4||umang[i]==7){
        check = true;

       }
    }
}
if(check){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

    

    

    
    return 0;
}