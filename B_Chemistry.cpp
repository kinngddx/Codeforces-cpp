#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    // Step 1: Count frequencies of each character
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }


    int odd_count = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            odd_count++;
        }
    }

    if (odd_count <= k + 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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