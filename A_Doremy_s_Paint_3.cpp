#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> mp;
        
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        if(mp.size() > 2) {
            cout << "No" << endl;
        } 
        else if(mp.size() == 1) {
            cout << "Yes" << endl;
        } 
        else {
  
            vector<int> counts;
            for(auto it : mp) {
                counts.push_back(it.second); 
            }
            
           
            if(abs(counts[0] - counts[1]) <= 1) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}