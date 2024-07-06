class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(auto num : nums) {
            mp[num]++;
        }

        for(auto num : nums) {
            if(mp[num] == 1) {
                return num;
            }
        }

        return -1;
    }
};

//optimal appraoch 
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n-1;

        //edge cases
        if(n==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];


        while(start<=end) {
            int mid = start + (end-start)/2;

            if(nums[mid] != nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];

            if ((mid % 2 == 1 && nums[mid] == nums[mid - 1]) || (mid % 2 == 0 && nums[mid] == nums[mid + 1])) {
            start = mid + 1;
            }

            else {
            end = mid - 1;
           }
        }

        return -1;
    }
};