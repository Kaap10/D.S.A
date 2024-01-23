//Reverse Linked List
#include<iostream>
using namespace std;

//reverse linked list

// class Node{
//     public:

//     Node() {
//         // this -> data =data;
//         this -> next = NULL;
//     }

//     Node(int Data) {
//         this -> data = data;
//         this - next = NULL;
//     }
// }
// Node* ReverseLL(Node* head) {
//     Node* prev = NULL;
//     Node* curr = head;

//     while(curr!=NULL) {
//         Node* nextNode = curr->next;
//         curr -> next = prev;
//         prev = curr;
//         curr = nextNode;
//     }

//     return prev;
// }


//Now Recursion Approach ->
class Solution{
    public:

    Node* reverseListUsingRecursion(Node* prev, Node* curr) {
        //base case
        if(curr = NULL) {
            return prev;
        }

        Node* nextNode = curr -> next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;

        Node* recursionKaAns = reverseListUsingRecursion(prev, curr);
        return recursionKaAns;
    }

    Node* reverseList(Node* head) {
        Node* prev = NULL;
        Node* curr = head;

        return reverseListUsingRecursion(prev, curr);
    }
}