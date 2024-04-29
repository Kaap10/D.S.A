class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int totalXOR = 0;

        for(int &num : nums) {
            totalXOR ^= num;
        }

        int diff = (totalXOR ^ k);
        return __builtin_popcount(diff);
    }
};