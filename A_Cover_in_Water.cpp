#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         string input;
         cin>>input;

         //solve krte hai
int size  = input.size();
bool umang = false;
int ans ;
         for( int i =0;i<size;i++){
            if(input[i]=='.'){
                umang = true;
            }

            if(umang){
         ans = size/2;       
            }


    }


    cout<<ans<<endl;


    }    
    return 0;
}