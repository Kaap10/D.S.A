// [BRUTE FORCE APPROACH] 
// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//         int n = nums.size();
//         int maxSum = INT_MIN;
//         int i=0; 
//         int j=k-1;

//         while(j<n) {
//             int sum = 0;
//             for(int x=i; x<=j; x++) {
//                 sum = sum + nums[x];
//             }
//             maxSum = max(maxSum, sum);
//             j++; i++;
//         }

//         double maxAvg = maxSum/(double)k;
//         return maxAvg;
//     }
// };

// [SLIDING WINDOW APPRAOCH]
class Solution{
    public:
    double findMaxAverage(vector<int> &nums, int k) {
        int n = nums.size();
        int i=0;
        int j=k-1;

        int sum = 0;
        for(int x=i; x<=j; x++) {
            sum = sum + nums[x];
        }

        int maxSum = sum;
        j++;
        while(j<n) {
            sum = sum - nums[i++];
            sum = sum + nums[j++];
            maxSum = max(maxSum, sum);
        }

        double maxAvg = maxSum/(double)k;
        return maxAvg;
    }
};