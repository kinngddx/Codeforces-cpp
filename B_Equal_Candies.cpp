#include<bits/stdc++.h>
using namespace std;

int main() {
     int t;
    cin >> t;  

    while (t--) {
        int n;
        cin >> n;  

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];  
        }

        int count =0;
        sort(a.begin(),a.end());
        for (int i = 1; i < a.size(); i++)
        {
            count+=(a[i]-a[0]);
        }
        cout<<count<<endl;
        



    }
    return 0;

}