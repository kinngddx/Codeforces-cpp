#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int max_consecutive = 1;
    int current_consecutive = 1;

    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) {
            current_consecutive++;
        } else {
            current_consecutive = 1;
        }
        max_consecutive = max(max_consecutive, current_consecutive);
    }

    cout << max_consecutive + 1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}