#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    long long singles_available = 0;
    long long base_cards = 0;
    long long total_capacity = 0;
    int b_size = 0;
    long long c_base_if_one = 0;
    
    for (int i = 0; i < n; i++) {
        long long val;
        cin >> val;
        if (val == 1) {
            singles_available++;
        } else {
            b_size++;
            base_cards += val;
            total_capacity += (val - 2) / 2;
            c_base_if_one = val;
        }
    }
    
    long long ans = 0;
    if (b_size == 0) {
        ans = 0;
    } else if (b_size == 1) {
        long long cap = c_base_if_one / 2;
        long long taken = min(cap, singles_available);
        ans = c_base_if_one + taken;
        if (ans < 3) ans = 0;
    } else {
        long long taken = min(total_capacity, singles_available);
        ans = base_cards + taken;
        if (ans < 3) ans = 0;
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int multTestQ;
    if (cin >> multTestQ) {
        while (multTestQ--) {
            solve();
        }
    }
    return 0;
}