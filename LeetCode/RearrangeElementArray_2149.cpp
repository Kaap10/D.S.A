class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int size = nums.size(); //size leliye
        vector <int> ans(size,0); //new vector banainge, size nums ka rhega, or 0 

        int posIndex =0; //+ve index 0 se start hai, fhir alternate +2 pe
        int negIndex =1; //-ve number idex 1 se start hai, fhir alternate +2 pe

        for(int index=0; index<size; index++) {
            if(nums[index]>0) { //agar nums ka no +ve hua toh, postindex pe num ke value rakhdenge through nums ka index then (+2 krdenge posindex ko, posindex ki index +ve hi rhega)
                ans[posIndex] = nums[index];
                posIndex+=2;
            }

            else {
                ans[negIndex] = nums[index]; // nums ka no agar -ve aajaye then negindex mai nums ki value daldenge throuhg nums index and (+2 krdenge negindex ko, negindex ka index -ve hi rhega)
                negIndex+=2;
            }
        }

        return ans;
    }
};