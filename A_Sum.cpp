#include<bits/stdc++.h>
using namespace std;
bool umang(int a,int b,int c,bool &check){
    vector<int > ahad = { a,b,c};
    sort(ahad.begin(),ahad.end());
    if(ahad[0]+ahad[1]!=ahad[2]){
        check=false;

    }
    return check ;


}

int main() {
 int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
            bool check =true;
            umang(a,b,c,check);
            if(check){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
    }



    
    return 0;
}