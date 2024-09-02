#include<bits/stdc++.h>
using namespace std;

bool checkYear(int year) {
    if(year%4==0) {
        if(year%100==0) {
            if(year%400==0) {
                return true;
            }
            else return false;
        }
        else return true;
    }
    else return false;
}

int main() {
    int year;
    cin >> year;

    int result = checkYear(year);
    if(result) cout << "Leap Year";
    else cout << "Not a leap year";

    return 0;
}