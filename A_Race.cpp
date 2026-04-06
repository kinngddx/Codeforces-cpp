#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,x,y;
        cin>>a>>x>>y;
       
        int ux = abs(a - x);
        int uy = abs(a - y);

        bool found = false;

 
        for (int b = min(x, y) - ux; b <= max(x, y) +uy; b++) {
            if (b != a && abs(b - x) < ux && abs(b - y) < uy) {
                found = true;
                break;
            }
        }

        cout << (found ? "YES" : "NO") << endl;
    



    }
    
    return 0;
}