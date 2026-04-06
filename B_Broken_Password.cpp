#include<bits/stdc++.h>
using namespace std;

int main() {
 int a;
 cin>>a;
 string input;
 cin>>input;

int n = input.size();
string half = input.substr(0,n/2);
string ans =half+ string(half.rbegin(),half.rend());
 cout<<ans<<endl;


    return 0;
}