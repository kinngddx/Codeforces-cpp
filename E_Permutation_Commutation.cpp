#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    vector<int> b(n + 1);
    vector<bool> used(n + 1, false);
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        if (b[i] != -1) {
            used[b[i]] = true;
        }
    }

    vector<int> pos_in_cycle(n + 1, 0);
    vector<int> cycle_id(n + 1, 0);
    vector<vector<int>> cycles;
    vector<bool> vis(n + 1, false);

    int cid = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            vector<int> cyc;
            int curr = i;
            while (!vis[curr]) {
                vis[curr] = true;
                cyc.push_back(curr);
                curr = a[curr];
            }
            cycles.push_back(cyc);
            for (int j = 0; j < (int)cyc.size(); j++) {
                cycle_id[cyc[j]] = cid;
                pos_in_cycle[cyc[j]] = j;
            }
            cid++;
        }
    }

    vector<int> shift(cycles.size(), -1);
    for (int i = 1; i <= n; i++) {
        if (b[i] != -1) {
            int c1 = cycle_id[i];
            int c2 = cycle_id[b[i]];
            if (c1 != c2) {
                cout << "NO\n";
                return;
            }
            int len = cycles[c1].size();
            int required_shift = (pos_in_cycle[b[i]] - pos_in_cycle[i] + len) % len;
            if (shift[c1] != -1 && shift[c1] != required_shift) {
                cout << "NO\n";
                return;
            }
            shift[c1] = required_shift;
        }
    }

    map<int, vector<int>> len_to_cycles;
    for (int i = 0; i < (int)cycles.size(); i++) {
        if (shift[i] == -1) {
            len_to_cycles[cycles[i].size()].push_back(i);
        }
    }

    vector<int> available;
    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            available.push_back(i);
        }
    }
    sort(available.begin(), available.end());

    int ptr = 0;
    for (int i = 1; i <= n; i++) {
        if (b[i] == -1) {
            int c = cycle_id[i];
            int len = cycles[c].size();
            if (shift[c] != -1) {
                b[i] = cycles[c][(pos_in_cycle[i] + shift[c]) % len];
            } else {
                while (ptr < (int)available.size()) {
                    int cand = available[ptr];
                    int c2 = cycle_id[cand];
                    if (cycles[c2].size() == len && shift[c2] == -1) {
                        int required_shift = (pos_in_cycle[cand] - pos_in_cycle[i] + len) % len;
                        shift[c] = required_shift;
                        break;
                    }
                    ptr++;
                }
                if (shift[c] == -1) {
                    cout << "NO\n";
                    return;
                }
                b[i] = cycles[c][(pos_in_cycle[i] + shift[c]) % len];
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (a[b[i]] != b[a[i]]) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
    for (int i = 1; i <= n; i++) {
        cout << b[i] << (i == n ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}