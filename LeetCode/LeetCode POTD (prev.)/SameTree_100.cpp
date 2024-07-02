class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        if(p==NULL && q!=NULL || p!=NULL && q==NULL) return false;
        if(p->val != q->val) return false;

        bool leftTreeMatch = isSameTree(p->left, q->left);
        bool rightTreeMatch = isSameTree(p->right, q->right);
        return leftTreeMatch && rightTreeMatch;
    }
};

//Short Code
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)    return true;
        if(!p || !q)    return false;
        return p->val==q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
