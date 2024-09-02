#include<bits/stdc++.h>
using namespace std;

bool primeChk(int n) {
    if(n<0 || n==1) cout << "Not Prime";
    for(int i=3; i<n*n; i++) {
        if(n%i==0) {
            return true;
        }
        return false;
    }
}

int main() {
    int n;
    cin >> n;

    int ans = bool(n);
    if(ans==1) cout << "Prime";
    else cout << "Not Prime";
    // cout << ans;
}