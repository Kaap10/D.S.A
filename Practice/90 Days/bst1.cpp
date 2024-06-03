// Node* insertIntoBST(Node* root, int data) {
//     if(root==NULL) {
//         Node* root = new Node(data);
//         return root;
//     }

//     if(data < root->val) {
//         root->left = insertIntoBST(root->left, data);
//     }

//     else {
//         root->right = insertIntoBST(root->right, data);
//     }
//     return root;
// }

// void createBST(Node* &root) {
//     cout << "Enter the root value: ";
//     int data;
//     cin >> data;

//     while(data!=-1) {
//         root = insertIntoBST(root, data);
//         cin >> data;
//     }
// }

#include<iostream>
using namespace std;

int natural_num(int n, int x) {

    if(n==0) return 0;
    if(n==1) return 1;
	for(int i=1; i<=n; i++) {
		if(i!=x) {
			cout << i << " ";
		}
	}
}
int main() {
	int n, x;
	cin >> n >> x;
	natural_num(n,x);
}
