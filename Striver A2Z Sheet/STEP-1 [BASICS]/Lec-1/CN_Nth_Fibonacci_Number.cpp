#include<bits/stdc++.h>
using namespace std;


int recursion(int n) {
        if(n<=1) {
                return n;
        }
        else {
                return recursion(n-1) + recursion(n-2);
        }
}
int main()
{
        int n;
        cin >> n;

       cout<< recursion(n) << endl;
}