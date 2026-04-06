#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }  
        unordered_map<int,int> map;
        for(int  num: a){
            map[num]++;
        }
int ans;
        bool check = false;
        for(auto it:map){
            if(it.second>=3){
                check = true;
                ans=it.first;
                break;
               
            }
        }

        if(check){
            cout<<ans<<endl;
            
        }else{
            cout<<-1<<endl;
        }
    



    } 
    return 0;
}