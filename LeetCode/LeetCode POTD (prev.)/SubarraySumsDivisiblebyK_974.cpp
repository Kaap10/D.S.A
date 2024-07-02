class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        unordered_map<int, int> remainderCount;
        int prefixSum = 0;
        int count = 0;
        remainderCount[0] = 1; 
        for (int num : A) {
            prefixSum = (prefixSum + num) % K;
            if (prefixSum < 0) prefixSum += K; 
            count += remainderCount[prefixSum];
            remainderCount[prefixSum]++;
        }
        return count;
    }
};