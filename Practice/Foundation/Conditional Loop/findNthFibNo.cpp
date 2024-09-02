#include<bits/stdc++.h>
using namespace std;

//iterative
int fib(int num) {
    int a = 0;
    int b = 1;
    int c = a+b;

    for(int i=2; i<=num; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cin >> n;
    int result = fib(n);
    cout << result;

    return 0;
}