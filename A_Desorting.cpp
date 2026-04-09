#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int mn = INT_MAX;

        for(int i = 1; i < n; i++) {
            mn = min(mn, a[i] - a[i-1]);
        }

        if(mn < 0) {
            cout << 0 << endl;
        } else {
            cout << (mn / 2) + 1 << endl;
        }
    }
    return 0;
}