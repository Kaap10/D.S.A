class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int N=nums.size();
        int j=0; 
        int i=1;

        while(i<N){
            if(nums[i]==nums[j]){
                i++;
            }else{
                nums[++j]=nums[i++];
            }
        }
        return j+1;
    }
};