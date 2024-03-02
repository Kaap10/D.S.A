#include<iostream>
#include<queue>
#include<vector>

using namespace std;

class Node{
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

//it will return the root of the tree
Node* createTree() {
    cout << "Enter the value: ";
    int data;
    cin >> data;

    if(data == -1) {
        return NULL;
    }

    Node* root = new Node(data);
    root->left = createTree();
    root->right = createTree();
    return root;
}

//level order traversal level wise 
void levelOrderTraversal(Node* root) {
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* frontNode = q.front();
        q.pop();

        if(frontNode==NULL) {
            cout << endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        }

        else {
            cout << frontNode->data << " ";
            if(frontNode->left != NULL) {
                q.push(frontNode->left);
            }

            if(frontNode->right != NULL) {
                q.push(frontNode->right);
            }
        }
    }
}

//left view of a binary tree
void printLeftView(Node* root, int level, vector<int> &leftview) {
    if(root==NULL) {
        return;
    }

    if(level==leftview.size()) {
        leftview.push_back(root->data);
    }

    printLeftView(root->left, level+1, leftview);
    printLeftView(root->right, level+1, leftview);
}

int main() {
    Node* root = createTree();
    cout << "Level wise order: "<<endl;
    levelOrderTraversal(root);

    int level = 0;
    vector<int> leftview;
    printLeftView(root, level, leftview);
    cout << "Left view" << endl;
    for(auto data: leftview) {
        cout << data << " ";
    }

    return 0;
}