// // // #include<bits/stdc++.h>
// // // using namespace std;

// // // int solvememo(int sum, int b, vector<vector<int>> &dp) {
// // //     const int MOD = 1e9+7;
// // //     if (b == 0) return sum == 0 ? 1 : 0;
// // //     if (sum < 0) return 0;
// // //     if (dp[sum][b] != -1) return dp[sum][b];

// // //     int count = 0;
// // //     for (int i = 0; i <= sum; ++i) {
// // //         count = (count + solvememo(sum - i, b - 1, dp)) % MOD;
// // //     }
// // //     return dp[sum][b] = count;
// // // }

 


// // // int solvetabu(int sum, int parts) {
// // //     const int MOD = 1e9 + 7;
// // // const int MAX_SUM = 1e5 + 1;

// // //     vector<int> dp(sum + 1, 0);
// // //     dp[0] = 1;

// // //     for (int i= 1; i <= parts; i++) {
// // //         vector<int> newdp(sum + 1, 0);
// // //         for (int j = 0; j <= sum; ++j) {
// // //             newdp[j] = dp[j];
// // //             if (j > 0) newdp[j] = (newdp[j] + newdp[j - 1]) % MOD;
// // //         }
// // //         dp = newdp;
// // //     }

// // //     return dp[sum];
// // // }

// // // int main() {
// // //     int t;
// // //     cin>>t;
// // //     while(t--){
// // //         int a,b;
// // //         cin>>a >> b;
// // //         int sum = a-b;
// // //     //   vector<vector<int>> dp(sum + 1, vector<int>(b + 1, -1));
// // //     if(sum<0){
// // //         cout<<0<<endl;
// // //     }else{
// // //         cout<<solvetabu(sum,b)<<endl;
// // //     }
// // // }
// // //     return 0;
// // // }








// // #include <bits/stdc++.h>
// // using namespace std;

// // const int MOD = 1e9 + 7;
// // const int MAX = 100005;
// // vector<long long> fact(MAX), invfact(MAX);

// // long long power(long long a, long long b) {
// //     long long res = 1;
// //     a %= MOD;
// //     while (b) {
// //         if (b & 1) res = res * a % MOD;
// //         a = a * a % MOD;
// //         b >>= 1;
// //     }
// //     return res;
// // }


// // void precompute() {
// //     fact[0] = invfact[0] = 1;
// //     for (int i = 1; i < MAX; ++i)
// //         fact[i] = (fact[i - 1] * i) % MOD;

// //     invfact[MAX - 1] = power(fact[MAX - 1], MOD - 2);
// //     for (int i = MAX - 2; i >= 1; --i)
// //         invfact[i] = (invfact[i + 1] * (i + 1)) % MOD;
// // }

// // long long ncr(int n, int r) {
// //     if (r < 0 || r > n) return 0;
// //     return fact[n] * invfact[r] % MOD * invfact[n - r] % MOD;
// // }

// // int main() {

// //     precompute();

// //     int t;
// //     cin >> t;
// //     while (t--) {
// //         int N, R;
// //         cin >> N >> R;
// //         if (R > N||R==0) cout << 0 <<endl;
// //         else cout << ncr(N - 1, R - 1) <<endl;
// //     }

// //     return 0;
// // }


// #include <bits/stdc++.h>
// using namespace std;

// const int MOD = 1e9 + 7;
// const int MAX = 100005;
// vector<long long> fact(MAX), invfact(MAX);

// long long power(long long a, long long b) {
//     long long res = 1;
//     a %= MOD;
//     while (b) {
//         if (b & 1) res = res * a % MOD;
//         a = a * a % MOD;
//         b >>= 1;
//     }
//     return res;
// }

// void precompute() {
//     fact[0] = invfact[0] = 1;
//     for (int i = 1; i < MAX; ++i)
//         fact[i] = (fact[i - 1] * i) % MOD;

//     invfact[MAX - 1] = power(fact[MAX - 1], MOD - 2);
//     for (int i = MAX - 2; i >= 1; --i)
//         invfact[i] = (invfact[i + 1] * (i + 1)) % MOD;
// }

// long long ncr(int n, int r) {
//     if (r < 0 || r > n) return 0;
//     return fact[n] * invfact[r] % MOD * invfact[n - r] % MOD;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     precompute();

//     int t;
//     cin >> t;
//     while (t--) {
//         int N, R;
//         cin >> N >> R;
//         if (R > N || R == 0) cout << 0 << endl;
//         else cout << ncr(N - 1, R - 1) << endl;
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAX = 100005;
vector<long long> fact(MAX), invfact(MAX);

long long power(long long a, long long b) {
    long long res = 1;
    a %= MOD;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

void precompute() {
    fact[0] = invfact[0] = 1;
    for (int i = 1; i < MAX; ++i)
        fact[i] = (fact[i - 1] * i) % MOD;

    invfact[MAX - 1] = power(fact[MAX - 1], MOD - 2);
    for (int i = MAX - 2; i >= 1; --i)
        invfact[i] = (invfact[i + 1] * (i + 1)) % MOD;
}

long long ncr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invfact[r] % MOD * invfact[n - r] % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute();

    int t;
    cin >> t;
    while (t--) {
        int N, R;
        cin >> N >> R;
        if (N <= 0 || R < 0 || R > N) {
            cout << 0 << endl;
        } else {
            cout << ncr(N - 1, R - 1) << endl;
        }
    }

    return 0;
}