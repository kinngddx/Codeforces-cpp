// // #include<bits/stdc++.h>
// // using namespace std;

// // bool umang(vector<int>& a) {
// //     for (int i = 0; i < a.size() - 1; ++i) {
// //         if (abs(a[i] - a[i + 1]) <= 1)
// //             return true;
// //     }
// //     return false;
// // }


// // int minops(vector<int> a, int depth = 0) {
// //     if (a.size() < 2) return -1;
// //     if (umang(a)) return depth;

// //     int min_op = INT_MAX;
// //     bool found = false;

// //     for (int i = 0; i < a.size() - 1; ++i) {
// //         vector<int> new_a = a;

// //         int x = (a[i] + a[i + 1]) / 2; 
// //         new_a.erase(new_a.begin() + i, new_a.begin() + i + 2);
// //         new_a.insert(new_a.begin() + i, x);

// //         int res = minops(new_a, depth + 1);
// //         if (res != -1) {
// //             found = true;
// //             min_op = min(min_op, res);
// //         }
// //     }

// //     return found ? min_op : -1;
// // }

// // int main() {
    
// //     int t;
// //     cin >> t;
    
// //     while (t--) {
// //         int n;
// //         cin >> n;
// //         vector<int> a(n);
// //         for (int i = 0; i < n; ++i) {
// //             cin >> a[i];
// //         }
// //         int result = minops(a);
// //         cout << result << '\n';
// //     }


    
// //     return 0;
// // }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);

//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//         }

//         bool beautiful = false;
//         for (int i = 0; i < n - 1; ++i) {
//             if (abs(a[i] - a[i + 1]) <= 1) {
//                 beautiful = true;
//                 break;
//             }
//         }

//         if (beautiful)
//             cout << 0 << '\n';
//         else
//             cout << 1 << '\n';
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        bool beautiful = false;
        for (int i = 0; i < n - 1; ++i) {
            if (abs(a[i] - a[i + 1]) <= 1) {
                beautiful = true;
                break;
            }
        }

        if (beautiful) {
            cout << 0 << '\n';
        } else if (n == 2 && abs(a[0] - a[1]) > 1) {
            
            cout << -1 << '\n';
        } else {
            cout << 1 << '\n';
        }
    }

    return 0;
}
