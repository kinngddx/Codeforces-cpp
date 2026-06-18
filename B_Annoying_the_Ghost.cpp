#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<int> L(n);
        bool ok = true;

        for (int i = 0; i < n; i++) {
            auto it = lower_bound(b.begin(), b.end(), a[i]);
            if (it == b.end()) {
                ok = false;
                break;
            }
            L[i] = int(it - b.begin()) + 1;
        }

        if (!ok) {
            cout << -1 << '\n';
            continue;
        }

        vector<pair<int,int>> v;
        for (int i = 0; i < n; i++) v.push_back({L[i], i});
        sort(v.begin(), v.end());

        priority_queue<int, vector<int>, greater<int>> pq;

        vector<int> p(n);
        int ptr = 0;

        for (int rank = 1; rank <= n; rank++) {
            while (ptr < n && v[ptr].first <= rank) {
                pq.push(v[ptr].second);
                ptr++;
            }

            if (pq.empty()) {
                ok = false;
                break;
            }

            int idx = pq.top();
            pq.pop();
            p[idx] = rank;
        }

        if (!ok) {
            cout << -1 << '\n';
            continue;
        }

        long long ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (p[i] > p[j]) ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}