#include<bits/stdc++.h>
using namespace std;
int longestPalindromeLength(string s) {
    unordered_map<char, int> freq;
    for (char ch : s) {
        freq[ch]++;
    }

    int length = 0;
    bool hasOdd = false;

    for (auto &pair : freq) {
        if (pair.second % 2 == 0) {
            length += pair.second;
        } else {
            length += pair.second - 1;
            hasOdd = true;
        }
    }

    if (hasOdd) length += 1; 

    return length;
}

int main() {
    int t;
    cin>>t;
    string input;
    cin>>input;
    cout<<longestPalindromeLength(input)<<endl;
    
    return 0;
}