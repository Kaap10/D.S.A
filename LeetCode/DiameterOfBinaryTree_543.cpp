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
    //OPTIMAL SOLUTIONS HAI (No overhead recursive calls, diameter baar baar nhi nikalna pd rha hai)
    int heigth(TreeNode* root, int &diameter) {
        if (root==NULL) {
            return 0;
        }

        int LH = heigth(root->left, diameter);
        int RH = heigth(root->right, diameter);
        int maxHeigth= max(LH, RH) +1;
        diameter= max(diameter, (LH+RH));
        return maxHeigth;
    }
    int diameterOfBinaryTree(TreeNode* root) {

        //base case
        if(root==NULL) {
            return 0;
        }      

        int diameter =0;
        heigth(root, diameter);
        return diameter;
    }
};

// BRUTE FORCE Solutions(Overhead recursive calls hai, baar baar recursive class nikalni pd rha hai)
class Solution {
public:

      int height(TreeNode* root) {
          if (root==NULL) {
              return 0;
          }

          int LH = height(root->left);
          int RH = height(root->right);
          int finalHeight=max(LH, RH) +1;
          return finalHeight;
      }
      int diameterOfBinaryTree(TreeNode* root) {
          //base case
          if(root==NULL) {
              return 0;
          }

          int option1 = diameterOfBinaryTree(root->left);
          int option2 = diameterOfBinaryTree(root->right);
          int option3 = height(root->left) + height(root->right);
          int diameter = max(option1, max(option2, option3));
          return diameter;
      }
};