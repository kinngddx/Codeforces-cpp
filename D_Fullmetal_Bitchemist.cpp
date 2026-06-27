#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    
    string s;
    cin >> s;



    long long total_not_zero = 0;
    vector<long long> freq(3, 0);
    freq[0] = 1;



    int current_pref = 0;


    for (int i = 0; i < n; i++) {




        int val = (s[i] == '0') ? 1 : 2;
        current_pref = (current_pref + val) % 3;


        
        total_not_zero += (i + 1) - freq[current_pref];
        freq[current_pref]++;


    }

    long long alternating_subsegments = 0;


    int current_len = 1;



    for (int i = 1; i <= n; i++) {


        if (i < n && s[i] != s[i - 1]) {


            current_len++;
        } else {


            if (current_len >= 3) {
                long long m = (current_len - 1) / 2;


                alternating_subsegments += m * (current_len - m - 1);


            }
            current_len = 1;
        }


    }

    cout << total_not_zero - alternating_subsegments << '\n';


}

int main() {
    ios::sync_with_stdio(false);


    cin.tie(nullptr);

    int t;
    cin >> t;


    while (t--) {


        solve();


    }

    return 0;
}