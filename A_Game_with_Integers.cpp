// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int check = 0;
//         bool umang = false;

//         while(n>0){
//         if(n%3==0 && check<=10){
//             // cout<<"First"<<endl;
//             umang = true;
//             break;


//         }else{
//             n=n/3;
//             check++;
//         }

//         }

//         if(umang) {
//             cout<<"First"<<endl;
//     }else{
//         cout<<"Second"<<endl;
//     }

//     }
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    if(n%3==0){
        cout<<"Second"<<endl;
    }else{
        cout<<"First"<<endl;
    }
   } 
    return 0;
}
