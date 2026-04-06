#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        if (a == b) {
            cout << 0 << '\n';
            continue;
        }

        if (a > b) {
            cout << -1 << '\n';
            continue;
        }

        int minCost = INT_MAX;

        // Try 0, 1, or 2 XORs
        for (int xorOps = 0; xorOps <= 2; ++xorOps) {
            int curr = a;
            int cost = 0;

            for (int i = 0; i < xorOps; ++i) {
                curr ^= 1;
                cost += y;
            }

            if (curr > b) continue;

            int addOps = b - curr;
            cost += addOps * x;

            minCost = min(minCost, cost);
        }

        cout << minCost << '\n';
    }

    return 0;
}
