#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long num, a, b;
        cin >> num >> a >> b;

        long long ans = (num / 3)*min(3 * a, b);
        long long rem = num%3;


        
        long long extra = rem * a;
        if (rem > 0) extra = min(extra, b);

        ans += extra;

        cout << ans << '\n';
    }

    return 0;
}