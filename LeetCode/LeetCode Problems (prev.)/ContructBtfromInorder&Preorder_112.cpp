class Solution {
private:
    map<int,int> mp; // Global mapping variable
public:
    // Here, we are finding index in time complexity of O(N)
    int searchInorder(vector<int>& inorder, int size, int element){
        for(int i=0; i<size; i++){
            if(inorder[i] == element){
                return i;
            }
        }
        return -1;
    }

    // Here, we are finding index position in time complexity of O(1)
    void mapping(vector<int>& inorder,int &size){
        for(int i=0;i<size;i++){
            mp[inorder[i]]=i;   
        }     
    }

    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int &preIndex, int size, int inorderStart, int inorderEnd){
        // base case
        if(preIndex >= size || inorderStart > inorderEnd ){
            return NULL;
        }

        // 1 case hum solve kar lenege
        int element = preorder[preIndex];
        preIndex++;

        TreeNode* root = new TreeNode(element);

        // Step 1: Find the position index of root(Element) in inorder array
        // int position = searchInorder(inorder, size, element);
        int position = mp[element];

        // Ab baki ka recursion solve kar lega
        // Creating the left sub tree
        root->left = solve(preorder, inorder, preIndex, size, inorderStart, position - 1);
        // Creating the right sub tree
        root->right = solve(preorder, inorder, preIndex, size, position + 1, inorderEnd);

        return root;

    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIndex = 0;
        int size = inorder.size();
        int inorderStart = 0;
        int inorderEnd = size - 1;
        mapping(inorder, size);
        TreeNode* binaryTreeRoot = solve(preorder, inorder, preIndex, size, inorderStart, inorderEnd);
        
        return binaryTreeRoot;
    }
};