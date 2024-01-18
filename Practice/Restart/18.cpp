//Sort colors -> 0 ke liye start, 1 ke liye index, 2 ke liye end
#include<iostream>
#include<vector>
using namespace std;


class Solution{
    public: 

    int sortColors(vector<int> &nums) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int index = 0;

        while(index<end) {
            if(nums[index]==0) {
                swap(nums[start], nums[index]);
                start++;
                index++;
            }

            else if(nums[index]==1) {
                index++;
            }

            else if(nums[index==2]) {
                swap(nums[end], nums[index]);
                end--;
                //index ke sath kuch nhi krna, nhi toh lafda hojaega 
            }
        }
    }
};