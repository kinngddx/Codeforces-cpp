#include <bits/stdc++.h>
using namespace std;

char mirror(char ch) {
    if (ch == 'p') return 'q';
    if (ch == 'q') return 'p';
    return 'w'; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;

        reverse(a.begin(), a.end());

        for (char &ch : a) {
            ch = mirror(ch);
        }

        cout << a << endl;
    }
    return 0;
}
