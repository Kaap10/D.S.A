#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int num) {
    if (num < 0) {
        cout << "Enter Positive Number";
        return false;
    }

    int originalNum = num;
    int sum = 0;
    int n = to_string(num).length(); // Number of digits

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int n;
    cin >> n;

    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}