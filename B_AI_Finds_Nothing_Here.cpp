#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

long long modpow(long long a, long long b) {
    long long r = 1;
    a %= MOD;
    while (b) {
        if (b & 1) r = r * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return r;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        long long n, m, r, c;
        cin >> n >> m >> r >> c;
        
        long long e = (n * m) - (n - r + 1) * (m - c + 1);
        
        cout << modpow(2, e % (MOD - 1)) << '\n';
    }
    
    return 0;
}