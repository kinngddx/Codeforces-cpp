#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    int count = 0;
    while (n != 1) {
        if (n % 6 == 0) {
            n /= 6;
        } else {
            if (n % 3 != 0) return -1; 
            n *= 2;
        }
        count++;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
