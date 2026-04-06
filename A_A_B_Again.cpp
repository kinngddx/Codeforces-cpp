#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n ;
        cin>>n;
        string a = to_string(n);
        vector<int> uma;
        // stringstream ss;
        // string ans;
        // while(getline(ss,ans,',')){
        //     uma.push_back(stoi(ans));
        // }
        for(int i=0;i<a.size();i++){
            uma.push_back(a[i]-'0');
        }
        int sum = (accumulate(uma.begin(),uma.end(),0));
        cout<<sum<<endl;
   
    }
    
    
    return 0;
}