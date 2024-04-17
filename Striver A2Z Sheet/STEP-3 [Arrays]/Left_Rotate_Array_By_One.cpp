#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int temp = arr[0];

    for(int i=0; i<n; i++) {
        arr[i] = arr[i+1];
    }

    arr[n-1] = temp;
    // for(int i=0; i<n; i++) {
    return arr;
    // }
}
