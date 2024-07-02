vector<int> printNos(int x) {
    vector<int> result;

    // Base case: if x is less than 1, return empty vector
    if (x < 1) {
        return result;
    }

    // Recursively call printNos function with x-1
    result = printNos(x - 1);

    // Push current value of x into the vector
    result.push_back(x);

    return result;
}