class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int operations = 0;

        for (int num : nums) {
          if (num < k) {
            operations++;
        } else {
            break;
           }
        }
    return operations;
    }
};