class Solution {
public:

    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq; // Min heap
        for (int num : nums) {
            pq.push(num);
        }
        
        int count = 0;
        while (pq.top() < k) {
            long long first = pq.top();
            pq.pop();
            long long second = pq.top();
            pq.pop();
            count++;
            long long val = min(first, second) * 2 + max(first, second);
            pq.push(val);
        }
        return count;
    }
};