#include<bits/stdc++.h>
using namespace std;

int calcPower(int num, int power) {
    return pow(num, power);
}

int main() {
    int num;
    cin >> num;

    int power;
    cin >> power;

    int result = calcPower(num, power);
    cout << result;

    return 0;
}