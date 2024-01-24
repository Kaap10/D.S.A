#include<iostream>
using namespace std;

// class Solution{
//     public:

//     void RemoveLoops(Node* head) {
//         // 1. slow and fast ko maine HEAD pe lagaya
//         Node* slow = head;
//         Node* fast = head;

//         //while loop chalainge, fast!=NULL
//         while(fast!=NULL) {
//             fast = fast -> next;
//             if(fast!=NULL) {
//                 fast = fast -> next;
//                 slow = slow -> next; //slow 1 move tab hi chlega, jab fast 2 move chalega
//             }

//             if(slow==fast) { //agar loop present hai break krdo
//                 break;
//             }
//         }

//         if(fast == NULL) { //jab loop present nhi hai toh, seedha fast lo return krdo
//             return fast;
//         }

//         slow = head; //slow ko head pe rakho (Fast apne position pe hi rhega)

//         while(fast!=NULL) { //ab slow and fast 1-1 move chlenge 
//             slow = slow -> next;
//             fast = fast -> next;
//         }

//         //Ab loop remove krne ka jugaad hehee
//         Node* startingPoint = slow;
//         Node* temp = fast;

//         while(temp->next!=startingPoint) {
//             temp = temp -> next;
//         }

//         temp -> next = NULL;

//     }
// }

//Add 1 to a linked list

// void reverseLL(Node* &head) {
//     Node* prev = NULL;
//     Node* curr = head;

//     while(curr!=NULL) {
//         Node* nextNode = curr -> next;
//         curr ->next = prev;
//         prev = curr;
//         curr = nextNode;
//     }
//     return prev;
// }
// void addOneToLL(Node* &head) {
//     head = reverseLL(head);

//     //add one to linked list
//     Node* temp = head;
//     int carry = 1;

//     while(temp->next != NULL) {
//         int TotalSum = temp -> data + carry;
//         carry = TotalSum/10;
//         int digit = TotalSum % 10;

//         temp -> data = digit;
//         temp = temp->next;

//         if(carry==0) {
//             break;
//         }
//     }

//     //-> jab carry zero na ho and list khtm na huyi usko alag se handle krna pdega 
//     if(carry!=0) {
//         int totalSum = temp->data + carry;
//         carry = totalSum/10;
//         int digit = totalSum % 10;

//         if(carry!=0) {
//             Node* newNode = new Node(carry);
//             temp -> next = newNode;
//         }
//     }

//     //again reverse krdo
//     head = reverseLL(head);
// }

//Reverse Nodes in K-Group
// -> Mast Question hai 

// class Solution {
//     public: 
//     /*
//     1. getLength ka function banao
//     2. main function ke ander->
//     (a) 1 case mai solve krunga
//     (b) ab recursion solve krega
//     (c) last mai kuch IMP Cheezen hai to keep in MIND*/

//     int getLength(Node* head) {
//         Node* temp = head;
//         int count = 0;
//         while(temp!=NULL) {
//             count++;
//             temp = temp -> next;
//         }
//         return count;
//     }

//     Node* reverseKgroup(Node* head, int k) {

//         //base case
//         int len = getLength(head);
//         if(len < k) {
//             return head;
//         }

//         //1 case mai solve krunga ab
//         Node* prev = NULL;
//         Node* curr = head;
//         Node* currNode = curr -> next;
//         int position = 0;
        
//         while(position<k) {
//             nextNode = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = nextNode;
//             position++;
//         }

//         Node* recursionKaAns = NULL;
//         if(nextNode!=NULL) {
//             recursionKaAns = reverseKgroup(nextNode, k);

//             head->next = recursionKaAns;
//         }

//         return prev;
//     }

// }

//Remove Duplicates from sorted Linked List

class Solution{
    public:
    Node* deleteDuplicates(Node* head) {
        //corner cases -> empty list & single element
        if(head == NULL) {
            return head;
        }

        if(head-> next = NULL) {
            return head;
        }

        Node* temp = head;

        while(temp!=NULL) {
            if(temp-> next != NULL && temp->val == temp -> next -> val) {
                Node* nextNode = temp ->next;
                temp->next = nextNode -> next;
                nextNode -> next = NULL;
                delete nextNode;
            }

            else {
                temp = temp -> next;
            }
        }

        return head;
    }
}