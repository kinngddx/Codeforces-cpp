#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;

    // Check if the string is already all zeros
    if (s.find('1') == string::npos) {
        cout << "Alice\n";
        return;
    }

    // If k == 1, Alice can turn all '1's to zero in one move
    if (k == 1) {
        cout << "Alice\n";
        return;
    }

    // Check if there's a contiguous block of at least k '1's
    int max_contiguous = 0;
    int current = 0;
    for (char c : s) {
        if (c == '1') {
            current++;
            max_contiguous = max(max_contiguous, current);
        } else {
            current = 0;
        }
    }

    if (max_contiguous >= k) {
        cout << "Bob\n";
    } else {
        cout << "Alice\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}