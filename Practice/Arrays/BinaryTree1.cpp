#include<iostream>
using namespace std;

//ab class baninge
class Node{
    public:
           int data;
           Node* left;
           Node* right;

           Node(int val) {
            this->data=val;
            this->left=NULL;
            this->right=NULL;
           }
};

// New node banainge, jo ki Root Node dega

Node* createTree() {
    cout<<"Enter the value: " <<endl;
    int data;
    cin>>data;

    //base case
    if(data==-1) {
        return NULL;
    }
    //new data fill krenge
    Node* root = new Node(data);
    //create left subtreee
    root -> left = createTree();
    //create right subtree
    root -> right = createTree();

    return root;
}

int main() {
    Node* root = createTree();
    return 0;
}