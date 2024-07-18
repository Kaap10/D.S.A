class Solution {
public:
    vector<vector<int>> result;

    void solve(int i, vector<int>& nums, vector<int>& storingSubsets) {
        if(i>=nums.size()) {
            result.push_back(storingSubsets);
            return;
        }

        storingSubsets.push_back(nums[i]);
        solve(i+1, nums, storingSubsets);
        storingSubsets.pop_back();
        solve(i+1, nums, storingSubsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> storingSubsets;
        solve(0, nums, storingSubsets);
        return result;
    }
};