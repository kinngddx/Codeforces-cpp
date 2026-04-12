#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        bool umang = false;
        
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] == k) {
                umang = true;
            }
        }

        if(umang) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}