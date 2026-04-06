#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n+1);
        ll oddSum = 0, evenSum = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (i % 2) oddSum += a[i];
            else evenSum += a[i];
        }
        cout << min(oddSum, evenSum) << "\n";
    }
    return 0;
}
