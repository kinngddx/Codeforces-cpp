#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while (t--)
{
    int n;
    cin>>n;
    int count = 0;
    for(int i=1;i<n;i++){
        int j = n-i;
        count+=1;
    }
    cout<<count<<endl;


}
    
    return 0;
}
