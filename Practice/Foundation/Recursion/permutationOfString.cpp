#include<bits/stdc++.h>
using namespace std;

int prem(string s) {
    if(index == s.length()-1) {
        return s;
    }

    for(int i=index; i<s.length(); i++) {
        swap(s[index], s[i]);
        prem(s, index+1);
        swap(s[index], s[i]);
    }
}

int main() {
    string str;
    cin >> str;
    permute(str, 0); 
    return 0;
}