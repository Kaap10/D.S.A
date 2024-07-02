class Solution {
public:

    int result;
    int K;
    void solve(vector<int> &nums, int idx, unordered_map<int, int> &mp) {

        if(idx == nums.size()) {
            result++;
            return;
        }

        //not taking
        solve(nums, idx+1, mp);
        
        //take & checking we can take it or not
        if(!mp[nums[idx] - K] && !mp[nums[idx] + K]) {
                mp[nums[idx]]++;
                solve(nums, idx + 1, mp);
                mp[nums[idx]]--;
        }
    }

    int beautifulSubsets(vector<int>& nums, int k) {
        result = 0;
        K = k;
        unordered_map<int, int> mp;
        solve(nums, 0, mp);
        return result - 1; //not including empty set
    }
};
