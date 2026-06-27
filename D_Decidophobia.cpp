#include <iostream>
#include <vector>

using namespace std;

void solve() {
    long long n, d;
    cin >> n >> d;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    long long cur_sum = 0;
    for (long long j = -d; j <= d; j++) {
        cur_sum += a[((j % n) + n) % n];
    }
    
    long long max_happiness = 0;
    for (int i = 0; i < n; i++) {
        long long w = 2 * d * a[i] - (cur_sum - a[i]);
        if (w > 0) {
            max_happiness += w;
        }
        cur_sum -= a[(i - d + n) % n];
        cur_sum += a[(i + d + 1) % n];
    }
    
    cout << max_happiness << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}