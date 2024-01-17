//Method-1 (by sorting & iteration)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size()-1;
        int ans = -1; //ans ko -1 se intialize krvana tah 
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++) {
            if(nums[i]==nums[i+1]) {
                ans = nums[i]; //direct ans ko kisi or mai store krke fhir return krna hai, after loop end 
            }
        }
        return ans;
    }
};

//Method - 2 (Poisition and Swapping marking method)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        while(nums[0]!=nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];
    }
};