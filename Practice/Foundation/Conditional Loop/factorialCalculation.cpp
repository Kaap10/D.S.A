// 5! = 5*4*3*2*1

#include<bits/stdc++.h>
using namespace std;

int factorial(int num) {
    if(num<0) return -1;
    if(num==0 || num==1) return 1;

    return num*factorial(num-1);
}

int main() {
    int n;
    cin >> n;

    int result = factorial(n);
    cout << result;

    return 0;
}