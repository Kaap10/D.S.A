//BRUTE FORCE
int isSorted(int n, vector<int> a) {
    // Write your code here.
    // int n=a.size();
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(a[j]<a[i]) {
                return false;
            }
        }
    }
    return true;
}

//OPTIMAL APPROACH
int isSorted(int n, vector<int> a) {
    // Write your code here.
    for(int i=1; i<n; i++) {
        if(a[i-1]>a[i]) {
            return false;
        }
    }
    return true;
}

