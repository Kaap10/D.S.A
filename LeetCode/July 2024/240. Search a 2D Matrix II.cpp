class Solution {
public:

    bool binarySearch(vector<int> &nums, int target) {
        int n = nums.size();

        int low = 0;
        int high = n-1;

        while(low<=high) {
            int mid = low + (high-low)/2;

            if(nums[mid]==target) return true;
            else if(nums[mid]<target) low = mid + 1;
            else high = mid - 1;
        }

        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();

        for(int i=0; i<n; i++) {
        bool flag = binarySearch(matrix[i], target);

        if(flag) return true;
    }
    return false;
    }
};