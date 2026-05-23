#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find_next(int x, vector<int>& nxt_uncolored) {
    if (nxt_uncolored[x] == x) return x;
    return nxt_uncolored[x] = find_next(nxt_uncolored[x], nxt_uncolored);
}

void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<int> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    vector<int> M_val(n + 1, 0);
    vector<int> R_max(n + 1, n);
    vector<int> nxt_uncolored(n + 2);
    for (int i = 1; i <= n + 1; i++) nxt_uncolored[i] = i;

    auto color_interval = [&](int left, int right, int val) {
        int l = left + 1;
        int r = right;
        if (l > r) return;
        int curr = find_next(l, nxt_uncolored);
        while (curr <= r) {
            R_max[curr] = val;
            nxt_uncolored[curr] = curr + 1;
            curr = find_next(curr, nxt_uncolored);
        }
    };

    for (int i = 1; i <= n; i++) {
        if (a[i] == b[i]) {
            int x = a[i];
            if (x == 1) {
                M_val[1] = i;
            } else {
                M_val[x] = M_val[x - 1];
            }
        } else {
            int la1, ra1, lb1, rb1;
            if (a[i] == 1) {
                la1 = M_val[1];
                ra1 = i;
            } else {
                la1 = M_val[a[i]];
                ra1 = M_val[a[i] - 1];
            }
            if (b[i] == 1) {
                lb1 = M_val[1];
                rb1 = i;
            } else {
                lb1 = M_val[b[i]];
                rb1 = M_val[b[i] - 1];
            }
            color_interval(la1, ra1, i - 1);
            color_interval(lb1, rb1, i - 1);
        }
    }

    long long ans = 0;
    for (int l = 1; l <= n; l++) {
        if (R_max[l] >= l) {
            ans += (R_max[l] - l + 1);
        }
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