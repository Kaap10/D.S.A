Node* insertIntoBST(Node* root, int data) {
    if(root==NULL) {
        Node* root = new Node(data);
        return root;
    }

    if(data < root->val) {
        root->left = insertIntoBST(root->left, data);
    }

    else {
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

void createBST(Node* &root) {
    cout << "Enter the root value: ";
    int data;
    cin >> data;

    while(data!=-1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}