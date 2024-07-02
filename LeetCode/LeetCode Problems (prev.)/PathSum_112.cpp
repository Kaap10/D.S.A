/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    bool solve(TreeNode* root, int targetSum, int sum) { //alag se function lenge, for extra sum (to compare it with targetSum)
        //base case
        if(root==NULL) {
            return false;
        }
        //1 case mai solve krunga
        sum = sum + root->val;
        //ab check krenge ki current root -> node leaf note pe toh nhi hai 
        if(root->left == NULL & root->right == NULL) {
            //verify krenge ki sum apne targetSum ke equal hai kya
            if(targetSum == sum ){
                return true;
            }
            else {
                return false;
            }
        }

        //ab recursion apna kamaal dikhayega
        bool leftSub = solve(root->left, targetSum, sum);
        bool rightSub = solve(root->right, targetSum, sum);

        //Important-> How to return?
        return leftSub || rightSub;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum =0;
        bool ans = solve(root, targetSum,sum);
        return ans;
    }
};