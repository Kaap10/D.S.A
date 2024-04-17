//Method one by mapping
vector<int> FindUnion(int arr1[], int arr2[], int a, int b) {
    map<int, int> freq;
    vector<int> Union;

    for(int i=0; i<n; i++) {
        freq[arr1[i]]++;
    }

    for(int i=0; i<m; i++) {
        freq[arr2[i]]++;
    }

    for(auto & it: freq) {
        Union.push_back(it.first);
    }
    return Union;
}

//OPTIMAL APPROACH
vector<int> FindUnion()