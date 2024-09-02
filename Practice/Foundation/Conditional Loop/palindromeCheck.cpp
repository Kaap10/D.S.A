#include<bits/stdc++.h>
using namespace std;

bool palindromeCheck(int num) {
    if(num<0) cout << "Give Input again";
    int rev = 0;
    while(num>0) {
    // int rev = 0;
    int digit = num%10;
    rev = rev*10 + digit;
    num = num/10;
    }
    return rev;
}

int main() {
    int num;
    cin >> num;

    int ans = palindromeCheck(num);
    if(ans==1) cout << "Palindrome";
    else cout << "Not Palindrome";
    // cout << ans;
}