//Implementation of a Binary Tree

#include<iostream>
using namespace std;

//first made a class
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* createTree() {

    cout << "Enter the data: ";
    int data;
    cin >> data;
    //base case

    if(data == -1) {
        return NULL;
    }

    Node* root = new Node(data);
    root -> left = createTree();
    root -> right = createTree();

    return root;
}

int main() {
    Node* root = createTree();
    return 0;
}