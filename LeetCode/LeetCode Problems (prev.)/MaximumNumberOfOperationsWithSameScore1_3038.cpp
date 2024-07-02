class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return 0;
        int ans = 1;
        int sm = nums[0] + nums[1];
        queue<int>q;
        for(int i=2; i<n; i++) {
            q.push(nums[i]);
        }
        
        while(q.size()>1) {
            int a = q.front();
            q.pop();
            int b = q.front();
            q.pop();
            if(a+b==sm) ans++;
            else return ans;
        }
        return ans;
    }
};