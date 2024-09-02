#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    cin >> n;

    int result = fibonacci(n);
    cout << result;

    return 0;
}