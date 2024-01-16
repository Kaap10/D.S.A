class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //mereko ko aisa index chaiye jiska left sum or right sum dono equal ho smjha?
        int n = nums.size(); //n mai size leliya

        int leftSum = 0;
        int rightSum = 0;

        for(int i=0; i<n; i++) { //sare elements ko store kra liya rightsum mai
            rightSum = rightSum + nums[i];
        }

        //ab loop chalega for leftSum = rightSum, kaise rightsum mai se elements sub krte rhunga jab tak leftsum ke equal nhi aajata... jab equal aagya toh index return kradunga

        for(int i=0; i<n ; i++) {
            rightSum = rightSum - nums[i];
            // leftSum = leftSum + nums[i];

            if(rightSum == leftSum ) {
                return i;
            }

             leftSum = leftSum + nums[i]; //Important cheez hai pehle == dekhenge then leftSum ko aage badhuang 
        }
        return -1;
    }
};