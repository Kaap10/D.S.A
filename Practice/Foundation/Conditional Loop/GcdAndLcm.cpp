#include <iostream>
using namespace std;

int calcGCD(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int calcLCM(int num1, int num2) {
    int gcd = calcGCD(num1, num2);
    int lcm = (num1 * num2) / gcd;
    return lcm;
}

int main() {
    int a, b;
    cin >> a >> b;

    int lcm = calcLCM(a, b);
    int gcd = calcGCD(a, b);

    cout << "LCM: " << lcm << endl;
    cout << "GCD: " << gcd << endl;

    return 0;
}