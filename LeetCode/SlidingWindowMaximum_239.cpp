class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> q;
        vector<int> ans;

        for(int index=0; index<k; index++) {
            int element = nums[index];
            while(!q.empty() && element > nums[q.back()]) {
                q.pop_back();
            }
            q.push_back(index);
        }

        for(int index= k; index < nums.size(); index++) {
            ans.push_back(nums[q.front()]);
            if(!q.empty() && index-q.front()>=k) {
                q.pop_front();
            }
            while(!q.empty() && nums[index] > nums[q.back()]) {
                q.pop_back();
            }
            q.push_back(index);
        }

        ans.push_back(nums[q.front()]);
        return ans;
    }
};