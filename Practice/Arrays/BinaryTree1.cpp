// #include<iostream>
// using namespace std;

// //ab class baninge
// class Node{
//     public:
//            int data;
//            Node* left;
//            Node* right;

//            Node(int val) {
//             this->data=val;
//             this->left=NULL;
//             this->right=NULL;
//            }
// };

// // New node banainge, jo ki Root Node dega

// Node* createTree() {
//     cout<<"Enter the value: " <<endl;
//     int data;
//     cin>>data;

//     //base case
//     if(data==-1) {
//         return NULL;
//     }
//     //new data fill krenge
//     Node* root = new Node(data);
//     //create left subtreee
//     root -> left = createTree();
//     //create right subtree
//     root -> right = createTree();

//     return root;
// }

// int main() {
//     Node* root = createTree();
//     return 0;
// }

//Generic Tree Problem
#include<iostream>
#include<queue>

using namespace std;

//pehle Node banainge
class Node {
    public:
    int data;
    int children_count;
    Node** children;

    //CONSTRUCTOR baninnge
    Node(int value) {
        this->data= value;
        this->children_count=0;
        this -> children = NULL;

    }
};

Node* takeInput() {
    int data, count;

    cout <<"Enter Root data:" ;
    cin>>data;

    cout << "Enter children count for "<<data<<" node: ";
    cin>>count;

    Node* root = new Node(data); //create Node
    root-> children_count = count; //creating children count

    //ek dynamic array banainge jisse chiildre node link hoga
    root->children= new Node(count);
    for(int i=0; i<count; i++) {

    }



}