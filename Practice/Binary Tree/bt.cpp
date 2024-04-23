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

void levelOrderTraversal(Node* root) {
    //pehle q baninge
    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        Node* frontNode = q.front();
        q.pop();

        cout << frontNode-> data << " ";

        if(frontNode->left != NULL) {
            q.push(frontNode->left);
        }


    }
}

class Solution {
public:
    int maxDepth(Node* root) {
        if(root==NULL) {
            return 0;
        }

        int leftNode = maxDepth(root->left);
        int rightNode = maxDepth(root->right);
        int height = max(leftNode, rightNode) + 1;
        return height;
    }
}

//Generic tree problem
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    int children_count;
    Node** children;

    //constructor
    Node(int val) {
        this-> data = value;
        this-> children_count = 0;
        this->children = NULL;
    }
};

Node* takeInput() {
    int data, count;
    cout << "Enter the data: ";
    cin >> data;

    cout << "Enter the children: ";
    cin >> count;

    Node* root = new Node(data);

    root-> children_count = count;

    root -> children = new Node[count];
    for(int i=0; i<count; i++) {
        root->childre[i] = takeInput();
    }
    return root;
}

int main() {
    takeInput();
    return 0;   
}