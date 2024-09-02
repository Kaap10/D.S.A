#include<bits/stdc++.h>
using namespace std;

int reverseDigit(int num) {
    if(num<0) return false;

    int rev = 0;

    while(num>0) {
        int lastDigit = num % 10;
        rev = rev*10 + lastDigit;
        num = num/10;
    }

    return rev;
}

int main() {
    int n;
    cin >> n;

    int result = reverseDigit(n);
    cout << result;

    return 0;
}