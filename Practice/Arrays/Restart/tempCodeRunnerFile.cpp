//Sort colors -> 0 ke liye start, 1 ke liye index, 2 ke liye end
#include<iostream>
#include<vector>
using namespace std;

int sortColors(vector<int> &nums) {
        // vector<int> nums = {0,1,0,1,2,2};
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int index = 0;
        while(index<=end) {
            if(nums[index]==0) {
                swap(nums[index], nums[start]);
                start++;
                index++;
            }

            else if(nums[index]==1) {
                index++;
            }

            else if(nums[index==2]) {
                swap(nums[index], nums[end]);
                end--;
                //index ke sath kuch nhi krna, nhi toh lafda hojaega 
            }
        }
    }
int printArray(vector<int> &nums, int n) {
    for (int i=0; i<n; i++) {
        cout << nums[i];
    }
}

int main() {
        vector<int> nums = {0,1,2,1,2,1,0};
        // int n;
        sortColors(nums);
        printArray(nums, n);

        return 0;
    }
