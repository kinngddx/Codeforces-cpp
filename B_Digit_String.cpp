#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
        
    while (t--) {

        
        string s;
        cin >> s;

        int n = s.size();
        vector<int> suf(n + 1, 0);


        
        for (int i = n - 1; i >= 0; --i) {
            suf[i] = suf[i + 1] + (s[i] == '1' || s[i] == '3');
        }



        int ans = 0, pref2 = 0;



        for (int i = 0; i <= n; ++i) {
            ans = max(ans, pref2 + suf[i]);
            if (i < n && s[i] == '2') pref2++;
        }








        cout << n - ans << '\n';
    }

    return 0;
}