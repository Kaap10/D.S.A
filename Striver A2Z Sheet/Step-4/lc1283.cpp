class Solution {
public:
    int computeSum(const vector<int>& nums, int divisor) {
    int sum = 0;
    for (int num : nums) {
        // Instead of using ceil, use integer arithmetic to achieve the same result
        sum += (num + divisor - 1) / divisor;
    }
    return sum;
}

int smallestDivisor(vector<int>& nums, int threshold) {
    int left = 1;
    int right = *max_element(nums.begin(), nums.end());

    while (left < right) {
        int mid = left + (right - left) / 2;
        if (computeSum(nums, mid) > threshold) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
}
};