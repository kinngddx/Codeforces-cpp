#include <bits/stdc++.h>
using namespace std;

void solve() {
    int total_score = 0;
    for (int i = 0; i < 10; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < 10; j++) {
            if (row[j] == 'X') {
             
                total_score += min({i, j, 9 - i, 9 - j}) + 1;
            }
        }
    }
    cout << total_score << endl;
}

int main() {
    // Speed up I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}