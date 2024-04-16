int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	set <int> st;
	for(int i=0; i<n; i++) {
		set.insert(arr[i]);
	}

	int k = st.size();
	int j=0;
	for(int x:st) {
		arr[j++] = x;
	}
	return k;
}

//optimal approach
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i=0;
	for(int j=1; j<n; j++) {
		if(arr[i] != arr[j]) {
			i++;
			arr[i] = arr[j];
		}
	}
	return i+1;
}