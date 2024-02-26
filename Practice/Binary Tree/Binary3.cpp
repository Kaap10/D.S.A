// //Implementation of a Binary Tree

// #include<iostream>
// using namespace std;

// //first made a class
// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         this->data = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node* createTree() {

//     cout << "Enter the data: ";
//     int data;
//     cin >> data;
//     //base case

//     if(data == -1) {
//         return NULL;
//     }

//     Node* root = new Node(data);
//     root -> left = createTree();
//     root -> right = createTree();

//     return root;
// }

// int main() {
//     Node* root = createTree();
//     return 0;
// }

//Three Binary Traversals pre, in and post
// #include<iostream>
// using namespace std;

// class Node{
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         this -> data = val;
//         this -> left = NULL;
//         this -> right = NULL:
//     }
// };

// Node* createTree(){
//     cout << "Enter the value: ";
//     int data;
//     cin >> data;

//     if(data==-1) {
//         return NULL;
//     }

//     Node* root = new Node(data);
//     root->left = createTree();
//     root->right = createTree();

//     return root;
// }

// //preorder transversal
// void preOrder(Node* root) {
//     //base case
//     if(root==NULL) {
//         return;
//     }

//     cout << root->data << " ";
//     preOrder(root->left);
//     preOrder(root->right);
// }

// void Inorder(Node* root) {
//     //base case
//     if(root==NULL) {
//         return;
//     }

//     Inorder(root->left);
//     cout << root->data << " ";
//     Inorder(root->right);
// }

// void Postorder(Node* root) {
//     //base case
//     if(root==NULL) {
//         return;
//     }

//     Inorder(root->left);
//     Inorder(root->right);
//     cout << root->data << " ";
// }

// int main() {
//     Node* root = createTree();
//     cout << "Preorder traversal->";
//     preOrder(root);
//     cout << endl;

//     cout << "Inorder traversal->";
//     Inorder(root);
//     cout << endl;

//     cout << "Postorder traversal->";
//     Postorder(root);
//     cout << endl;
// }

//LEVEL ORDER TRAVERSAL IN A LINE
// #include<iostream>
// #include<queue>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         this-> data = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node* createTree() {
//     cout << "Enter the value: ";
//     int data;
//     cin >> data;

//     if(data==-1) {
//         return NULL;
//     }

//     Node* root = new Node(data);
//     root -> left = createTree();
//     root -> right = createTree();

//     return root;
// }

// void levelWiseOrder(Node* root) {
//     queue<Node*>q;

//     q.push(root);

//     if(!q.empty()) {
//         Node* frontNode = q.front();
//         q.pop();
//         cout << frontNode->data << " ";

//         if(frontNode->left!=NULL) {
//             q.push(frontNode->left);
//         }

//         if(frontNode->right!=NULL) {
//             q.push(frontNode->right);
//         }
//     }
// }

// int main() {
//     Node* root = createTree();
//     cout << "Level order: "<<endl;
//     levelWiseOrder(root);
//     return 0;
// }

//LEVEL WISE TRAVERSAL LEVEL WISE (not in a line)

