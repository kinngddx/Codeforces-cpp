#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;

        vector<int> gas(n);
        for(int i = 0; i < n; i++){
            cin >> gas[i];
        }

        int maxi = gas[0];   //0 and last station ko add krddo

        for(int i = 1; i < n; i++){
            maxi = max(maxi, gas[i] - gas[i-1]);
        }

        //dekho bc simple hai ki longest gap betwen 2 stations  tk kka petrol hona chiaye kuki cove kr le us max ko nikal lo 
         

        maxi = max(maxi, x - gas[n-1]);
        maxi = max(maxi, 2 * (x - gas[n-1])); 

        cout << maxi << endl;
    }

    return 0;
}