#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        long long n, k, x;
        cin >> n >> k >> x;

        // minimum possible sum
        long long mini = (k * (k + 1)) / 2;

        // maximum possible sum
        long long maxi = (k * (2 * n - k + 1)) / 2;

        if(x >= mini && x <= maxi)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}