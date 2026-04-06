#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
      vector<int> input(4);
      for (int i = 0; i < 4; i++)
      {
        cin>>input[i];
      }
      
      int count =0;
      for (int i = 1; i < 4; i++)
      {
        if(input[i]>input[0]){
            count+=1;
        }
      }
      cout<<count<<endl;


    }
    
    return 0;
}
