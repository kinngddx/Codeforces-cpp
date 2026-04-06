// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     vector<int> input(n);
//     for (int  i = 0; i <n; i++)
//     {
//         cin>>input[i];
//     }
//     int p=0;
//     int s=0;


//     for (int i = 0; i <input.size(); i++)

//     {
//         int leftsum=accumulate(input.begin(),input.begin()+i,0);
//         int rightsum=accumulate(input.begin()+i+1,input.end(),0);
//         if(leftsum>rightsum){
//             p+=1;
//         }
//         else if(rightsum>leftsum){
//             s+=1;
//         }else{
//             p+=1;
//             s+=1;
//         }

//     }
//     if(p>s){
//         cout<<"P"<<endl;
//     }else if(s>p){
//         cout<<"S"<<endl;
//     }else{
//         cout<<"D"<<endl;
//     }
    
    

    
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> input(n);
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    // Precompute prefix sum
    vector<int> prefix(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + input[i];
    }

    int p = 0, s = 0;
    for (int i = 0; i < n; i++) {
        int leftsum = prefix[i];                      // sum of elements before i
        int rightsum = prefix[n] - prefix[i + 1];     // sum of elements after i

        if (leftsum > rightsum) {
            p++;
        } else if (rightsum > leftsum) {
            s++;
        } else {
            p++;
            s++;
        }
    }

    if (p > s) {
        cout << "P" << endl;
    } else if (s > p) {
        cout << "S" << endl;
    } else {
        cout << "D" << endl;
    }

    return 0;
}
