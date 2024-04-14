//Approach-1 (simple recursion with parent node)
// class Solution {
// public:

//     int solve(TreeNode* curr, TreeNode* parent) {
//         if(curr == NULL) {
//             return 0;
//         }

//         if(curr->left == NULL && curr->right == NULL) {
//             if(parent!=NULL && parent->left == curr) {
//                 return curr -> val;
//             }
//         }

//         int left = solve(curr->left, curr);
//         int right = solve(curr->right, curr);

//         return left+right;
//     }

//     int sumOfLeftLeaves(TreeNode* root) {
//         return solve(root, NULL);
//     }
// };

//Approach-2 (without parent node, just T?F)
class Solution{
public:
    int solve(TreeNode* curr, bool isLeft) {
        if(curr==NULL){
            return 0;
        }

        if(curr->left == NULL && curr->right == NULL && isLeft == true) {
            return curr->val;
        }

        return solve(curr->left, true) + solve(curr->right, false);
    }

    int sumOfLeftLeaves(TreeNode* root) {
        return solve(root, false);
    }
};