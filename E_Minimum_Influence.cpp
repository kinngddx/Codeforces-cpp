#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const long long INF = 1e18;
const int MAX = 1000000;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<long long> p(n), c(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> c[i];

    long long global_min_sum = INF;
    vector<long long> min_c_by_p(MAX + 2, INF);
    vector<long long> min_p_by_c(MAX + 2, INF);

    for (int i = 0; i < n; i++) {
        global_min_sum = min(global_min_sum, p[i] + c[i]);
        if (p[i] <= MAX) min_c_by_p[p[i]] = min(min_c_by_p[p[i]], c[i]);
        if (c[i] <= MAX) min_p_by_c[c[i]] = min(min_p_by_c[c[i]], p[i]);
    }

    vector<long long> pref_min_c_by_p(MAX + 2, INF);
    vector<long long> suff_min_c_by_p(MAX + 2, INF);
    long long cur_min = INF;
    for (int i = 0; i <= MAX; i++) {
        cur_min = min(cur_min, min_c_by_p[i]);
        pref_min_c_by_p[i] = cur_min;
    }
    cur_min = INF;
    for (int i = MAX; i >= 0; i--) {
        cur_min = min(cur_min, min_c_by_p[i]);
        suff_min_c_by_p[i] = cur_min;
    }

    vector<long long> pref_min_p_by_c(MAX + 2, INF);
    vector<long long> suff_min_p_by_c(MAX + 2, INF);
    cur_min = INF;
    for (int i = 0; i <= MAX; i++) {
        cur_min = min(cur_min, min_p_by_c[i]);
        pref_min_p_by_c[i] = cur_min;
    }
    cur_min = INF;
    for (int i = MAX; i >= 0; i--) {
        cur_min = min(cur_min, min_p_by_c[i]);
        suff_min_p_by_c[i] = cur_min;
    }

    int m;
    if (!(cin >> m)) return 0;

    vector<long long> tp(m), tc(m), d(m);
    for (int i = 0; i < m; i++) cin >> tp[i];
    for (int i = 0; i < m; i++) cin >> tc[i];
    for (int i = 0; i < m; i++) cin >> d[i];

    for (int i = 0; i < m; i++) {
        long long P = tp[i];
        long long C = tc[i];
        long long D = d[i];

        long long ans = global_min_sum;

        int idx1 = min((long long)MAX, P - 1);
        if (P > 0 && pref_min_c_by_p[idx1] < C) {
            ans = min(ans, 0LL);
        }

        int idx2 = min((long long)MAX, C - 1);
        if (C > 0 && pref_min_p_by_c[idx2] < INF) {
            ans = min(ans, min(pref_min_p_by_c[idx2], P + D));
        }

        int idx3 = min((long long)MAX, P - 1);
        if (P > 0 && pref_min_c_by_p[idx3] < INF) {
            ans = min(ans, min(pref_min_c_by_p[idx3], C + D));
        }

        if (C + D <= MAX) {
            long long v = suff_min_p_by_c[C + D];
            if (v < INF) {
                ans = min(ans, min(v, P + D) + C + D);
            }
        }

        
        

        if (P + D <= MAX) {
            long long v = suff_min_c_by_p[P + D];
            if (v < INF) {
                ans = min(ans, min(v, C + D) + P + D);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}