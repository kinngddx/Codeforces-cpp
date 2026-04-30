#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int operations = 0;
    // Iterate from the second to last element down to the first
    for (int i = n - 2; i >= 0; i--) {
        // If a[i+1] is 0 and we are not at the start, it's impossible
        if (a[i + 1] == 0) {
            cout << -1 << endl;
            return;
        }
        // Divide a[i] until it is strictly less than a[i+1]
        while (a[i] >= a[i + 1] && a[i] > 0) {
            a[i] /= 2;
            operations++;
        }
        // Re-check: if it's still not smaller, it's impossible
        if (a[i] >= a[i + 1]) {
            cout << -1 << endl;
            return;
        }
    }
    cout << operations << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}