#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long ans = 0;
        long long cost = 1;
        while (cost <= n) {
            long long take = min(k, n / cost);
            ans += take;
            n -= take * cost;
            if (cost > (1LL << 60)) break;
            cost <<= 1;
        }
        cout << ans << '\n';
    }
    return 0;
}