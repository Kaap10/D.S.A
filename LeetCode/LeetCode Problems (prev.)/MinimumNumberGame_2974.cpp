class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        
        sort(nums.begin(), nums.end()); //isse SORTING krenge [5,4,2,3]
        
        for (int i = 0; i < nums.size(); i += 2){ 
            //seedha i=0 se i=2 pe jump marega, first i=0 or i=1 swap hoajyenge then i=2 or i=3 swap hoyenge 
            
            swap(nums[i], nums[i +1]); //[3,2,5,4]
        }
        return nums;
    }
};
