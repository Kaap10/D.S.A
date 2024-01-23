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
// class Solution{
//     public:

//     Node* reverseListUsingRecursion(Node* prev, Node* curr) {
//         //base case
//         if(curr = NULL) {
//             return prev;
//         }

//         Node* nextNode = curr -> next;
//         curr->next = prev;
//         prev = curr;
//         curr = nextNode;

//         Node* recursionKaAns = reverseListUsingRecursion(prev, curr);
//         return recursionKaAns;
//     }

//     Node* reverseList(Node* head) {
//         Node* prev = NULL;
//         Node* curr = head;

//         return reverseListUsingRecursion(prev, curr);
//     }
// }


//Reverse Linked List LeetCode - 234
//-> middle of LL, reverse of LL using recursion, compareList
// class Solution {
//     public:

//     Node* middleLL(Node* head) {
//         //using hare and tortoise algorithm
//         Node* slow = head;
//         Node* fast = head;

//         while(fast->next!=NULL) {
//             fast = fast -> next;
//             if(fast->next!=NULL) {
//                 fast = fast -> next;
//                 slow = slow ->next;
//             }
//         }
//         return slow;
//     }

//     Node* reverseLL(Node* prev, Node* curr) {
//         if(curr = NULL) {
//             return prev;
//         }

//         while(curr!=NULL) {
//             Node* nextNode = curr -> next;
//             curr -> next = prev;
//             prev = curr;
//             curr = nextNode;

//             return reverseLL(prev, curr);
//         }
//     }

//     bool compareList(Node* head, Node* head2) {
//         while(head2!=NULL) {
//             if(head->val != head2->val) {
//                 return false;
//             }

//             else {
//                 head = head -> next;
//                 head2 = head2 -> next;
//             }
//         }
//         return true;
//     }

//     Node* isPalindrome(Node* head) {
//         Node* midNode = middleLL(head);
//         Node* head2 = midNode -> next;  
//         midNode -> next = NULL;

//         Node* prev = NULL;
//         Node* curr = head2;
//         head2 = reverseListUsingRecursion(prev, curr);

//         bool ans = compareList(head, head2);
//         return ans;
//     }
// };

//Linked List Cycle
// class Solution {
//     public:

//     bool hasCycle(ListNode* head) {
//         map<Node*, bool> table;

//         Node* temp = head;

//         while(temp!=NULL) {
//             if(table[temp] == false) {
//                 table[temp] = true;
//             }

//             else {
//                 return true;
//             }

//             temp = temp->next;
//         }
//     }
//     return true;
// }

// class Solution{
//     public:
    
//     //hare and tortoise algorithm
//     Node* slow = head;
//     Node* fast = head;

//     while(fast!=NULL) {
//         fast = fast -> next;
//         if(fast!=NULL) {
//             fast = fast -> next;
//             slow = slow -> next;
//         }

//         if(slow == fast) {
//             return true;
//         }
//     }

//     return false;
// }

//Starting point of loop (leetcode - 142)
// -> 1. loop present hai ya nhi check krenge
// -> 2. slow ko head pe rakhenge? fhir main cheez slow and fast 1 1 step chlege, jab slow=fast hoga tab break hojayega, and return krenge slow

// class Solution{
//     public:

//     Node* detectcycle(Node* head) {
//         Node* slow = head;
//         Node* fast = head;

//         while(fast!=NULL) {
//             fast = fast-> next;
//             if(fast!=NULL) {
//                 fast = fast->next;
//                 slow = slow -> next;
//             }

//             if(slow == fast ) {
//                 break;
//             }
//         }

//         if(fast == NULL) {
//             return false;
//         }

//         slow = head;

//         while(fast != slow) {
//             slow = slow -> next;
//             fast = fast ->next;
//         }
//         return slow;
//     }
// };





