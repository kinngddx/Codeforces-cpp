#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    long long xor_sum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        xor_sum ^= a[i];
    }
    
    // If there's only 1 pile, it's an immediate losing state
    if (n == 1) {
        cout << 0 << "\n";
        return;
    }
    
    long long winning_moves = 0;
    
    // Move to wipe out all elements (leaves 0 non-zero elements)
    if (xor_sum == 0) {
        winning_moves++;
    }
    
    // Moves to wipe out all elements EXCEPT one (leaves 1 non-zero element)
    for (int i = 0; i < n; i++) {
        if ((xor_sum ^ a[i]) < a[i]) {
            winning_moves++;
        }
    }
    
    cout << (winning_moves % MOD) << "\n";
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}