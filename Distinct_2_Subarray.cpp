#include <bits/stdc++.h>
using namespace std;

int shortestGoodSubarray(vector<int>& A) {
    int n = A.size();
    int minLength = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        unordered_set<int> distinct;
        for (int j = i; j < n; j++) {
            distinct.insert(A[j]);
            
            if (distinct.size() > 2) break; // more than 2 distinct, no need to expand
            
            if (distinct.size() == 2) {
                minLength = min(minLength, j - i + 1);
            }
        }
    }
    
    return (minLength == INT_MAX) ? -1 : minLength;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        cout << shortestGoodSubarray(A) << "\n";
    }

    return 0;
}
