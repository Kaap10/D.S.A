#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;

    while(num!=0) {
    int lastDigit = num % 10;
    sum = sum + lastDigit;
    num = num/10;
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    int result = sumOfDigits(n);
    cout << result;

    return 0;
}