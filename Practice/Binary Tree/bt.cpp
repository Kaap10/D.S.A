class Node{
public:
    int data;
    Node* left;
    Node* right;

    //Constructor
    Node(int val) {
        this -> data = val;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* createTree() {
    int data;
    cin >> data;

    if(data == -1) {
        return NULL:
    }

    Node* root = new Node(data);
    root -> left = createTree();
    root -> right = createTree();
    return root;
}

void preOrder(Node* root) {
    if(root==NULL) {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right        );
}

int main() {;
    Node* root = createTree();
    return 0;
}