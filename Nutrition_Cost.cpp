#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--) {
        int N, C; cin >> N >> C;
        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) cin >> A[i];
        for (int i = 0; i < N; i++) cin >> B[i];

        // Map vitamin -> minimum cost of item providing it
        unordered_map<int, int> vitamin_min_cost;

        for (int i = 0; i < N; i++) {
            int vit = A[i];
            int cost = B[i];
            if (vitamin_min_cost.find(vit) == vitamin_min_cost.end() || cost < vitamin_min_cost[vit]) {
                vitamin_min_cost[vit] = cost;
            }
        }

        vector<int> costs;
        for (auto& p : vitamin_min_cost) {
            costs.push_back(p.second);
        }

        sort(costs.begin(), costs.end());

        int max_value = 0; // option to buy nothing

        int sum_cost = 0;
        for (int k = 1; k <= (int)costs.size(); k++) {
            sum_cost += costs[k-1];
            int val = C * k - sum_cost;
            if (val > max_value) max_value = val;
        }

        cout << max_value << "\n";
    }

    return 0;
}
