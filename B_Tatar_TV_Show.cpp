// #include<bits/stdc++.h>
// using namespace std;


// void solve(){
//     int n,k;
//     cin>>n>>k;
//     string s;
//     cin>>s;
    
    
//     vector<int> counts(k,0);
//     for(int i=0;i<n;++i){
//         if(s[i]=='1'){
//             counts[i%k]^=1;
//         }
//     }
    
//     bool umang = true;
//     for(int x:counts){
        
//         if(x){
            
        
//        cout<<"NO"<<endl;
//        return;
//     }
    
//     }
    
// cout<<"YES"<<endl;
// }
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t;
//     cin>>t;
//     if(cin>>t){
        
    
//     while(t--){
//         solve();
//     }
//     }
    
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        char s[200005];
        scanf("%s",s);
        bool ok=true;
        for(int i=0;i<n-k;i++){
            if(s[i]=='1'){
                s[i]='0';
                s[i+k]^=1;
            }
        }
        for(int i=n-k;i<n;i++)
            if(s[i]=='1'){ok=false;break;}
        puts(ok?"YES":"NO");
    }
}