// Approach-1 (using sets)
// class Solution {
// public:
//     int getCommon(vector<int>& nums1, vector<int>& nums2) {
//         unordered_set<int> st(begin(nums1), end(nums1));

//         for(int &num: nums2) {
//             if(st.find(num)!=st.end()) {
//                 return num;
//             }
//         }
//         return -1;
//     }
// };

// Approach-2 (Binary Search)
// class Solution {
// public:
//     bool binarySearch(vector<int>& nums, int target) {
//         int l = 0, r = nums.size()-1;
        
//         while(l <= r) {
//             int mid = l + (r-l)/2;
            
//             if(nums[mid] == target) {
//                 return true;
//             } else if(nums[mid] < target) {
//                 l = mid+1;
//             } else {
//                 r = mid-1;
//             }
//         }
        
//         return false;
//     }
    
//     int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
//         for(int &num : nums1) {
//             if(binarySearch(nums2, num))
//                 return num;
//         }
        
//         return -1;
//     }
// };

// Approach-3 (two pointers approach)
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        int i = 0;
        int j = 0;

        while(i<m && j<n) {
            if(nums1[i] == nums2[j]) {
                return nums1[i];
            }

            else if(nums1[i]< nums2[j]) {
                i++;
            }

            else {
                j++;
            }
        }
        return -1;
    }
};