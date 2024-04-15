//APPROACH-1 -> BRUTE FORCE
/* TC -> O(nlogn)
   SC -> 0(n)*/
#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    sort(arr.begin(), arr.end());
    int largest = arr[n-1];
    return largest;
}

//APPROACH-2 -> OPTIMAL APPROACH (using max variable)
#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int max = arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i]>max) {
            max = arr[i];
        }
    }
    return max;
}

