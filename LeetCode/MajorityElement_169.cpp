class Solution {
public:
    int majorityElement(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int n =nums.size();
        int k= nums.size()-1;
        int midIndex = (0+k)/2;
        return nums[midIndex];

        //point yeh hai ki Mojirty element always (mid) index pe hi exist krega
        //3 Approaches to solve this problem

        //No.1 Approach (Brute force)
        /*(a) count each element
        (b) compare each element
        (c) return highest counted element = majority element
        Time Complexity: O(N^2), where N is length of array
        Space Complexity: O(1), no extra space used*/

        //No.2 Approach (BS Approach 2)
        /* a. first occurence of mid
        b. last occurence of mid
        c. total occurence of mid = majority element
        Time Complexity: O(N log N), where N is length of array
        Space Complexity: O(1), no extra space used*/

        //No.3 Approach (Sorting Aprroach)
        /* a. Sort the array
        b. return the mid index element = mojority element
        Time Complexity: O(N log N), where N is length of array
        Space Complexity: O(1), no extra space used*/
    }
};