// #include<bits/stdc++.h>
// using namespace std;
// void ahad(int i,vector<vector<int>> &cost,int &count){
//     if(i==cost.size()){
//         return;
//     }
//     int maxi = *max_element(cost[i].begin(),cost[i].end());
//         count+=maxi;
//         ahad(i+1,cost,count);

// }

// int main() {
//     int t;
//     cin>>t;
//     int count = 0;
//     vector<vector<int>> cost(t,vector<int>(3));
//     for(int i =0;i<t;i++){
//         cin>>cost[i][0]>>cost[i][1]>>cost[i][2];
//     }

//     ahad(0,cost,count);
//     cout<<count<<endl;


 
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); // Faster I/O
    cin.tie(NULL);               // Disable automatic flush after input

    int n;
    cin >> n;

    long long total = 0;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        total += max({a, b, c});
    }

    cout << total << '\n';
    return 0;
}
