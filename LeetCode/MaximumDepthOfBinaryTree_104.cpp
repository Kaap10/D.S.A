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
    int maxDepth(TreeNode* root) {
    //base case
    if(root==NULL) { //root NULL hua toh return 0 kregenge 
        return 0;
    }

    int leftNode=maxDepth(root->left); //leftNode mai dekhenge ki
    int rightNode=maxDepth(root->right); //rightNode mai dekhenge ki
    int height = max(leftNode, rightNode) +1; //maximum nikalenge (leftNode, or RightNode) mai se or usme +1 krenge
    return height; //height ko return krenge
    }
};