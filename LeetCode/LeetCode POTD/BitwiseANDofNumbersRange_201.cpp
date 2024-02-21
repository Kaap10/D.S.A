//APPROACH -1 
/* Time Complexity : O(logN)
Space Complexity: O(1) */
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int count = 0;
        while(left!=right) {
            left = left/2;
            right = right/2;
            count++;
        }
        return left<<count;
    }
};

//Approach-2 (same as 1, but style different)
class Solution{
    int rangeBitwiseAnd(int left, int right) {
        int count = 0;
        while(left!=right) {
            left = left >> 1;
            right = right >> 1;
            count++;
        }
        return (left<<count);
    }
}

//APPROACH-3 (Brute force appraoch)
/* TC- O(n)
    SC- O(1) */
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int result = left;
        for (int i = left+1; i <= right; i++) {
            result = result & i;
        }
        return result;
    }
};