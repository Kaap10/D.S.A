class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int size = nums.size(); 
        vector<int> ans(size, 0);

        int posIndex = 0;
        int negIndex = 1;

        for (int index=0; index<size; index++) {
            if(nums[index]>0) {
                ans[posIndex] = nums[index];
                posIndex = posIndex + 2;
            }

            else {
                ans[negIndex] = nums[index];
                negIndex = negIndex + 2;
            }
        }      
        return ans;
    }
};