#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char source, char des, char aux) {
    if(n==1) {
        cout << "Move 1 disk from " << source << " to " << des << endl;
        return;
    }

    towerOfHanoi(n-1, source, aux, des);
    
    cout << "Move disk " << n << " from rod " << source << " to rod " << des << endl;

    towerOfHanoi(n-1, aux, des, source);
}

int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;

    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}