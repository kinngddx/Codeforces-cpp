#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int cnt = 0;
        bool inSeg = false;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if(x != 0) {
                if(!inSeg) {
                    cnt++;
                    inSeg = true;
                }
            } else {
                inSeg = false;
            }
        }

        cout << min(cnt, 2) << '\n';
    }

    return 0;
}