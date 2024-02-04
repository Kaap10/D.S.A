// we have a nums which is non-zero
/* if nums[i] < 0 -> then move left by -nums[i]
if nums[i] > 0 -> then move right by nums[i]*/
#include<iostream>
#include<vector>
using namespace std;

    int returnToBoundaryCount(vector<int> &nums) {
        int position = 0;
        int BoundaryCount = 0;
        int n = nums.size();

        for(int i=0; i<n; i++) {
            if(nums[i]<0) {
                position = position - abs(nums[i]);
            }

            else {
                position = position + nums[i];
            }

            if(position==0) {
                BoundaryCount++;
            }
        }
        return BoundaryCount;
    }

    int main() {
        vector<int> nums = {2, 3, -5};
        cout << returnToBoundaryCount(nums);
        return 0;
    }