#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b,x;
        scanf("%lld %lld %lld",&a,&b,&x);
        if(a>b)swap(a,b);
        if(x==1){printf("%lld\n",b-a);continue;}
        long long ans=b-a,sb=0,cb=b;
        while(cb>0){
            long long sa=0,ca=a;
            while(ca>cb){ca/=x;sa++;}
            ans=min(ans,sb+sa+(cb-ca));
            long long su=0,nb=cb;
            if(nb%x)su=x-(nb%x);
            nb+=su;
            long long sa2=0,ca2=a;
            while(ca2>nb/x){ca2/=x;sa2++;}
            ans=min(ans,sb+su+1+sa2+(nb/x-ca2));
            cb/=x;sb++;
        }
        long long sa=0,ca=a;
        while(ca>0){ca/=x;sa++;}
        ans=min(ans,sb+sa);
        printf("%lld\n",ans);
    }
}