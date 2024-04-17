//using DFS
class Solution {
public:

    string result = "";
    void dfs(TreeNode* root, string curr) {
        if(root==NULL) {
            return;
        }

        curr = char(root->val + 'a') + curr;

        if(root->left==NULL && root->right==NULL) {
            if(result=="" || result>curr) {
                result=curr;
            }
            return;
        }

        dfs(root->left, curr);
        dfs(root->right, curr);
    }
    string smallestFromLeaf(TreeNode* root) {
        dfs(root, "");

        return result;
    }
};