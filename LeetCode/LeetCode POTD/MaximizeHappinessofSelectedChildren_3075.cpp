class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end(), greater<int>());

        long long result = 0;
        int count = 0;

        for(int i=0; i<k; i++) {
            result = result + max(happiness[i]-count, 0);
            count++;
        }

        return result;
    }
};