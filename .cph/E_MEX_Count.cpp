// #include <bits/stdc++.h>
// using namespace std;

// // dp[m]: min #removals needed to have MEX = m
// // feasible for k in [dp[m], n - m]

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;
//     while (T--) {
//         int n;
//         cin >> n;
//         vector<int> a(n), freq(n + 1, 0);
//         for (auto& x : a) {
//             cin >> x;
//             freq[x]++;
//         }

//         vector<int> missing(n + 2, 0);
//         for (int m = 1; m <= n; m++) {
//             missing[m] = missing[m - 1] + (freq[m - 1] == 0);
//         }

//         vector<int> cnt(n + 2, 0);

//         for (int m = 0; m <= n; m++) {
//             int dp_m = missing[m] + freq[m];
//             int R = n - m;
//             if (dp_m <= R) {
//                 cnt[dp_m]++;
//                 if (R + 1 <= n) cnt[R + 1]--;
//             }
//         }

//         vector<int> ans(n + 1, 0);
//         int cur = 0;
//         for (int k = 0; k <= n; k++) {
//             cur += cnt[k];
//             ans[k] = cur;
//         }

//         for (int k = 0; k <= n; k++) {
//             cout << ans[k] << " \n"[k == n];
//         }
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> freq(n + 2, 0);
    for (int num : a) {
        if (num <= n) {
            freq[num]++;
        }
    }

    int mex = 0;
    while (freq[mex] > 0) {
        mex++;
    }

    vector<int> res(n + 1, 0);
    if (mex == 0) {
        for (int k = 0; k <= n; ++k) {
            res[k] = 1;
        }
    } else {
        vector<int> min_remove(mex + 1, 0);
        for (int m = 0; m < mex; ++m) {
            min_remove[m] = freq[m] - 1;
        }
        min_remove[mex] = 0;

        vector<int> prefix_sum(mex + 2, 0);
        for (int m = 0; m <= mex; ++m) {
            prefix_sum[m + 1] = prefix_sum[m] + min_remove[m];
        }

        for (int m = 0; m <= mex; ++m) {
            int k = prefix_sum[m] + freq[m];
            if (k <= n) {
                res[k]++;
            }
        }

        for (int k = 1; k <= n; ++k) {
            res[k] += res[k - 1];
        }
    }

    for (int k = 0; k <= n; ++k) {
        cout << res[k] << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}