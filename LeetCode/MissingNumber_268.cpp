#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //missing number find krna hai 

        int n= nums.size();
        int sum =0;

        for (int i=0; i<n; i++) {
            sum = sum + nums[i]; //given no ka sum kal lenge
        }

        int totalSum = (n*(n+1))/2; //sum of range nikal lenge bu using n*(n+1)/2 formual se
        int missingNum = totalSum - sum; //sum fo ranges - sum of given range 

        return missingNum;
    }
};