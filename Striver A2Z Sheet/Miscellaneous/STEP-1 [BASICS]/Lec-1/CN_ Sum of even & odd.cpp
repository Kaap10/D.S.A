#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin >> n;

	int evenSum=0;
	int oddSum=0;

	while(n>0) {
		int digit = n%10;
		if(digit%2==0) {
			evenSum = evenSum + digit;
		}
		else {
			oddSum = oddSum + digit;
		}
		n = n/10;
	}
    cout<< evenSum << " " << oddSum;

    return 0;
}
