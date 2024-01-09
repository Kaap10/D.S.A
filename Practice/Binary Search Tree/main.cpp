///Construct Binary Structure from Inorder 
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

//Pehle Node Class banainge
class Node{
    int data;
    Node* left;
    Node* right;

    //constructor banainge
    Node(int val) {
        this->data = val;
        this-> left =NULL;
        this-> right =NULL;
    }
};

void levelWiseTransversalOrder(Node* root) {
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    // jab tak q empty nhi hota
    while(!q.empty()) {
        Node* frontNode = q.front();
        q.pop();

        if(frontNode == NULL) {
            cout <<endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        }

        else {
            cout << frontNode->data <<" ";

            if(frontNode->left!=NULL) {
                q.push(frontNode->left);
            }

            if(frontNode->right!=NULL) {
                q.push(frontNode->right);
            }
        }
    }
}

Node* bstFromInorder(int inorder[], int start, int end) {
    //base case
    if(start>end) {
        return NULL;
    }

    int mid = (start+end)/2;
    int element = inorder[mid];
    Node* root = new Node(element);

    root->left = bstFromInorder(inorder, start, end);
    root->right = bstFromInorder(inorder, start, end);

    return root;
}

//main function
int main() {
    int inorder[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = 9;
    int start = 0;
    int end = size -1;

    Node* root = bstFromInorder(inorder, start, end);
    cout << "Level wise order: " <<endl;
    levelWiseTransversalOrder(root);

    return 0;
}