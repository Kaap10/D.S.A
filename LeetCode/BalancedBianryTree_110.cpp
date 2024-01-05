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

 //Approach -> 
//  subtree ka hieght nikalna pdega
class Solution {
public:
    int height(TreeNode* root) {
        if(root==NULL) {
            return 0;
        }
        //left or right ki height nikaleneg
        int leftH=height(root->left);
        int rightH=height(root->right);
        int finalH = max(leftH, rightH)+1;
        return finalH;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) { //leaf node ko balanced samjehenge 
            return true;
        }

        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        int diff = abs(leftHeight - rightHeight);

        bool currentNode = (diff <= 1);

        // baki ka kaam Recursion dekhega
        bool leftSubtree = isBalanced(root->left);
        bool rightSubtree = isBalanced(root->right);

        //ab dekhenge ki Tree balanced hai ya nhi
        if(currentNode && leftSubtree & rightSubtree) {
            return true;
        }
        else {
            return false;
        }
        
    }
};