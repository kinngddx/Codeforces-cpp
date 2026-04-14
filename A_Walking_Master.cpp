#include <iostream>
#include <algorithm>

using namespace std;

long long solve() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;


    if (d < b) return -1;

    long long diag_moves = d - b;
    long long current_x = a + diag_moves;


    if (current_x < c) return -1;

    long long left_moves = current_x - c;

    return diag_moves + left_moves;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}