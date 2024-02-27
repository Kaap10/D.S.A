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
// class Solution {
// public:

//     int height(TreeNode* root) {
//         if(root==NULL) {
//             return 0;
//         }

//         int LH = height(root->left);
//         int RH = height(root->right);
//         int maxHeight = max(LH, RH) +1;
//         return maxHeight;
//     }
//     bool isBalanced(TreeNode* root) {
//         if(root==NULL) {
//             return true;
//         }

//         int leftHeight = height(root->left);
//         int rightHeight = height(root->right);
//         int diff = abs(leftHeight-rightHeight);
//         bool currentNode = (diff<=1);

//         bool leftSub = isBalanced(root->left);
//         bool rightSub = isBalanced(root->right);
//         if(currentNode && leftSub && rightSub) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }
// };

//Better appraoch
class Solution{
    public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        if(Height(root)==-1) return false;
        return true;
    }

    int Height(TreeNode* root) {
        if(root==NULL) {
            return 0;
        }

        int leftHeight = Height(root->left);
        int rightHeight = Height(root->right);
        if(leftHeight==-1 || rightHeight==-1 || abs(leftHeight-rightHeight) > 1) return -1;
        return max(leftHeight, rightHeight) +1;
    }
};

//leetcode 236 Lowest common ancestor of a binary tree (IMP One)
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) {
            return NULL;
        }

        if(root->val == p->val) {
            return p;
        }

        if(root->val == q->val) {
            return q;
        }

        TreeNode* leftAns = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightAns = lowestCommonAncestor(root->right, p, q);

        if(leftAns == NULL && rightAns == NULL) return NULL;
        else if(leftAns==NULL && rightAns!=NULL) return rightAns;
        else if(leftAns!=NULL && rightAns==NULL) return leftAns;
        else return root;
    }
};

class Solution {
public:

    //mujhe alag se sum lena hai toh, ek alag function banaunga and then vahan sum ko pass krdunga
    bool solve(TreeNode* root, int targetSum, int sum) {
        if(root==NULL) {
            return false;
        }

        sum = sum + root->val;
        if(root->left == NULL && root->right==NULL) {
            if(targetSum == sum) {
                return true;
            }
            else {
                return false;
            }
        }

        bool leftSub = solve(root->left, targetSum, sum);
        bool rightSub = solve(root->right, targetSum, sum);
        return leftSub || rightSub;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        bool ans = solve(root, targetSum, sum);
        return ans;
    }
};

class Solution {
public:

    void solve(TreeNode* root, int targetSum, int sum, vector<int> temp, vector<vector<int>> &ans) {
        if(root==NULL) {
            return;
        }

        sum = sum + root->val;
        temp.push_back(root->val);

        if(root->left == NULL && root->right==NULL) {
            if(targetSum==sum) {
                ans.push_back(temp);
            }
            else {
                return;
            }
        }

        solve(root->left, targetSum, sum, temp, ans);
        solve(root->right, targetSum, sum, temp, ans);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        int sum = 0;
        solve(root, targetSum, sum, temp, ans);
        return ans;
    }
};

//Contruct binary tree from INORDER and PREORDER Transversal (Leetcode 105)
