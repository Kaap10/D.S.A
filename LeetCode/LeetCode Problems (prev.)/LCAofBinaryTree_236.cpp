/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //base cases
        if(root == NULL) { //root NULL ho to return NULL
            return NULL;
        }
        if( root->val == p->val) { //if root ka val or p ka val same ho toh return p
            return p;
        }
        if(root -> val == q-> val) { //if root ka val or q ka val same ho toh return q
            return q;
        }
        TreeNode* leftAns = lowestCommonAncestor(root->left, p, q); //left ke tree mai dekhenge
        TreeNode* rightAns = lowestCommonAncestor(root->right, p, q); //right ke tree mai dekhenge

        //Return LCA
        if(leftAns == NULL && rightAns == NULL) //left or right dono NULL hai toh return NULL
        return NULL;

        else if(leftAns != NULL && rightAns == NULL) //if left Null nhi hai OR right NULL hai toh return left
        return leftAns;

        else if(leftAns == NULL && rightAns != NULL) //if left NULL hai & right NULL nhi hai then return right 
        return rightAns;

        else return root;
    }
};