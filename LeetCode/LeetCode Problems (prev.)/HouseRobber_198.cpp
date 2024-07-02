// APPROACH-1
// class Solution {
// public:

//     int solve(vector<int> &nums, int size, int index) {
//         if(index >= size) {
//             return 0;
//         }

//         int option1 = nums[index] + solve(nums, size, index+2);
//         int option2 = 0 + solve(nums, size, index+1);
//         int finalAns = max(option1, option2);
//         return finalAns;
//     }

//     int rob(vector<int>& nums) {
//         int size = nums.size();
//         int index = 0;
//         int ans = solve(nums,size,index);
//         return ans;
//     }
// };


//APPROACH-2
class Solution {
public:
    int rob(vector<int>& nums) {
        int prev1 = 0, prev2 = 0;
        for (int num : nums) {
            int temp = prev1;
            prev1 = max(prev2 + num, prev1);
            prev2 = temp;
        }
        return prev1;
    }
};w