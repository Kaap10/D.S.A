#include<iostream>
#include<vector>
#include<string>
#include<algorithm> // Add the missing include directive for the <algorithm> header

using namespace std;

string triangleType(vector<int> &nums) {

    sort(nums.begin(), nums.end());
    if(nums[0] == nums[1] && nums[1] == nums[2]) {
        return "Equilateral"; 
    }

    else if (nums[0] == nums[1] || nums[1] == nums[2]) {
        return "isoceles";
    }

    else {
        return "scalene";
    }
}

int main() {
    vector<int> nums = {3,4,5};
    cout << triangleType(nums);
    return 0;
}

