class Solution {
public:
    void sortColors(vector<int>& nums) {
        /* Three approachers are there
        1. Counting method
        2. Two Pointer approach
        3. Searching */
        int n = nums.size();
        int start =0; //0 ke liye
        int index =0;
        int end = n-1; //2 ke liye

        while(index<=end) { //jaise hi index > end hua, then stop
           if(nums[index]==0) {
               swap(nums[index], nums[start]); //0 mila toh, index se uthake, seedha aage bhejdo start pe
               index ++; //index ko aage badhadenge
               start++;  //start ko bhi 
           }

           else if(nums[index]==1) { // 1 mila, toh chill
               index++;
           }
           else if(nums[index]==2) { //2 mila toh, end ki value, or index ki value ko swap krdenge
               swap(nums[index], nums[end]);
               end--; //"IMPORTANT" -> yahan pe sirf end-- krenge, why not index++? because hume nhi pata right se value uthke left kya ja rhi hai -> probability (0,1,2) ki hai, isliye nhi krenge
           }
        }
    }
};

//time complexity - O(n)