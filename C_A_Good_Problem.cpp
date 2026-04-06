#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        uint64_t n, l, r, k;
        cin >> n >> l >> r >> k;

        if (n == 1) {
            if (l <= r) {
                cout << l << '\n';
            } else {
                cout << -1 << '\n';
            }
            continue;
        }

        // For n > 1, all elements must be the same
        if (l <= r) {
            cout << l << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}