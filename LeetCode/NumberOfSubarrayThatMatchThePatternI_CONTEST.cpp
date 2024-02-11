class Solution {
    public:
    int countMatchingSubarray(vector<int> &nums, vector<int> &pattern) {
        int n = nums.size();
        int m = pattern.size();

        int count = 0;
        for(int i=0; i<n-m+1; i++) {
            bool isMatch = true; // Initialize isMatch to true

            for (int k=0; k<m; k++) { // Add missing variable declaration for 'k'
                if((pattern[k]==1 && (nums[i+k+1])<= (nums[i+k])) ||
            pattern[k]==0 && (nums[i+k+1]) != (nums[i+k]) || 
            pattern[k] == -1 && (nums[i+k+1] >= nums[i+k])) {
                isMatch = false;
                break;
            }
            }

            if(isMatch) { // Move the 'if' statement inside the inner loop
                count++;
            }
        }
        return count; // Add missing return statement
    }
}