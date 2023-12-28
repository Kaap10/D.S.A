// class Solution {
// public:
//     //simpele bianry search ka code hai 
//     bool bs(vector<int>& nums, int start, int x) {
//         int end = nums.size();
//         while(start<=end) {
//             int mid = start + (end-start)/2;
//             if(nums[mid] == x) {
//                 return true;
//             }
//             else if (nums[mid]>x) {
//                 end = mid -1;
//             }
//             else {
//                 start = mid+1;
//             }

//         } return false;
//     }

//     int binarySortingSol(vector<int>& nums, int k) {
//         sort(nums.begin(), nums.end()); //sort krenge pehle 
//         set<pair<int,int>> ans; //SET banainge jo ki distict number leta hai,a gar pehle 1 dediya set mai, then next time 1 no, apne set mai nhi lega 

//         for (int i=0; i<nums.size(); i++) {
//             bool target = bs(nums, i+1, nums[i]+k); //i+1 se dekhna strat krenge mtlb Right subarray mai dekhenge, a[i] apni jagah pe hai kadha hua, till +k tak dekhenge

//             if(target) {
//                 ans.insert({nums[i], nums[i]+k}); //set mai insert krdenge
//             }
//         }
//         return ans.size(); // number of distinct pairs niklega 
//     } 
//     int findPairs(vector<int>& nums, int k) {
//         //isme apne ko distinct pairs chaiye jo ki difference "k" ke bara bar ho
//         /*Approach - Binary search
//         1. Sort the array
//         2. apply binary search
        
//         TC: O(NlogN), N is the lenght of array nums
//         SC: O(1) */
//         return binarySortingSol(nums, k);
//     }
// };
class Solution {
public:
    // Binary Search Approach
    bool bs(vector<int>& nums,int start,int target){
        int end = nums.size()-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return false;
    }
    int binarySortingSol(vector<int>& nums, int k){
        sort(nums.begin(),nums.end());
        set<pair<int,int>> ans;

        for(int i=0;i<nums.size();i++){
            bool target = bs(nums,i+1,nums[i]+k);

            if(target){
                ans.insert({nums[i],nums[i]+k});
            }
        }
        return ans.size();
    }
    
    int findPairs(vector<int>& nums, int k) {
        return binarySortingSol(nums, k);
    }
};