//Brute force 
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    sort(a.begin(), a.end());
    return {a[n - 2], a[1]};
}
