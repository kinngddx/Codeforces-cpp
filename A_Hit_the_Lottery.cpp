#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> umang = {100, 20, 10, 5, 1};
    int count = 0;

    for (int i = 0; i < umang.size(); i++) {
        if (t >= umang[i]) {
            count += t / umang[i];     // Take as many of this denomination as possible
            t = t % umang[i];          // Reduce remaining amount
        }
    }

    cout << count << endl;
    return 0;
}
