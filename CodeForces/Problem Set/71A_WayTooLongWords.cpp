#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s[n];

    for(int i=0; i<n; i++) {
        if(s[i].size > 10) {
            cout << s[i][0] << s[i].size-2 << s[i][i].size()-1<<endl;
        }
        else {
            cout << s[i] << endl;
        }
    }
    return 0;
}