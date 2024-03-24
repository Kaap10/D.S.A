#include<iostream>
using namespace std;

int main() {

	// Write your code here
	char n;
	cin >> n;

	if(n >= 'A' && n<='Z') {
		cout << 1;
	}

	else if(n >= 'a' && n<='z') {
		cout << 0;
	}

	else {
		cout << -1;
	}

	return 0;
}
