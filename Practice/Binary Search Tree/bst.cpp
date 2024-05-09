Node* insertIntoBST(Node* root, int data) {
    if(root==NULL) {
        Node* newNOde = new Node(data);
        return root;
    }

    if(data > root->val) {
        root->right = insertIntoBST(root->right, data);
    }

    else {
        root -> left = insertIntoBST(root->left, data);
    }

    return root;
}

//Binary search tree traversals 
/* Preorder, Inorder & Postorder*/
/* NLR. LNR. LRN*/

//Min and Max value in BST
Node* minVal(Node* root) {
    if(root==NULL) {
        return NULL;
    }

    Node* temp = head;
    while(temp!=NULL) {
        temp = temp -> left;
    }
    return temp;
}

Node* maxVal(Node* root) {
    if(root==NULL) {
        return NULL;
    }

    Node* temp = head;
    while(temp!=NULL) {
        temp = temp -> right;
    }
    return temp;
}

//Searching element that is present in BST or not

Node* search(Node* root, int target) {
    if(root == NULL) {
        return false;
    }

    if(target == root->value) {
        return true;
    }

    bool left = false;
    bool right = false;

    if(target > root->val) {
        right = search(root->right, target);
    }

    if(target < root->val) {
        left = search(root->left, target);
    }

    return left || right;
}

Node* deleteNodefromBST (Node* root, int target) {
    if(root==NULL){
        return NULL;
    }

    if(target == root->data) {
        if(root->left == NULL && root->right = NULL) {
            delte root;
            return NULL;
        }

        else if(root->left == NULL && root->right != NULL) {
            Node* childA = root->right;
            delete root;
            return childA;
        }

        else if(root->left != NULL && root->right == NULL) {
            Node* childB = root->left;
            delete root;
            return childB;
        }

        else if(root->left !=NULL && root->right != NULL) {
            Node* max = maxValue(root->left);
            root->data = maxi->data;
            root->left = deleteNodefromBST(root->left, maxi->data);
            return root;
        }
    }
}