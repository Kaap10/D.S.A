class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int result = nums[0];
        return result;
    }
};

//approach-2
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int ans = INT_MAX;

        while(start<=end) {
            int mid = start + (end-start)/2;

            if(nums[start] <= nums[mid]) {
                ans = min(ans, nums[start]);
                start = mid + 1;
            }

            else {
                ans = min(ans, nums[mid]);
                end = mid - 1;
            }
        }

        return ans;
    }
};