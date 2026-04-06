#include <bits/stdc++.h>
using namespace std;

int countSortableSubarrays(vector<int>& A) {
    int n = A.size(), count = 0;
    for (int i = 0; i < n; ++i) {
        unordered_set<int> seen;
        for (int j = i; j < n; ++j) {
            if (seen.count(A[j])) break;
            seen.insert(A[j]);
            count++;
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        cout << countSortableSubarrays(A) << "\n";
    }
    return 0;
}
