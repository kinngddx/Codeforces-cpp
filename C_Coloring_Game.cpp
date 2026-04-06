#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        int max_elem = a[n - 1]; 

        int count = 0;

        for (int i = 0; i < n - 2; ++i) {
            for (int j = i + 1; j < n - 1; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    int x = a[i], y = a[j], z = a[k];
                    int min_sum = min({x + y, x + z, y + z});

                    if (min_sum > max_elem) {
                        count++;
                    }
                }
            }
        }

        cout << count << '\n';
    }

    return 0;
}
