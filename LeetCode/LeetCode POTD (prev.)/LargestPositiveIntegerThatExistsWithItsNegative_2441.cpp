//Two Pointer approach
// class Solution {
// public:
//     int findMaxK(vector<int>& nums) {
//         int n = nums.size();
//         sort(begin(nums), end(nums));

//         int start = 0;
//         int end = n-1;

//         while(start<end) {
//             if(-nums[start] == nums[end]) {
//                 return nums[end];
//             }

//             if(-nums[start] < nums[end]) {
//                 end--;
//             }

//             else {
//                 start++;
//             }
//         }
//         return -1;
//     }
// };

//Something new Approach
class Solution{
public:
    int findMaxK(vector<int> &nums) {
        int arr[2001] = {0};
        int result = -1;

        for(int &num : nums) {
            if(arr[-num + 1000] == 1) {
                result = max(result, abs(num));
            }

            arr[num+1000] = 1;
        }
        return result;
    }
};