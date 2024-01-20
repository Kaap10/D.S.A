// //linked list has 4 types 1. Single linked list 2. Double linked list 3. Circular linked list 4. Double Circular Linked list

// //creating linked list and a node

// #include<iostream>
// using namespace std;

// // class Node {
// //     public:
// //     int data;
// //     Node* next;

// //     Node() { //agar node mai kuch nhi hua 
// //         this -> next = NULL;
// //     }
// //     Node(int data) { //agar node mai kuch data present hua toh
// //         this -> data = data;
// //         this -> next = NULL;
// //     }
// // };

// // //linked list ki length check krne ke liye
// // int getLength(Node* head) {
// //     Node* temp = head;
// //     int count = 0;

// //     while(temp!=NULL) {
// //         count++;
// //         temp = temp->next;
// //     }
// //     return count;
// // }

// // //print kene ke liye function 
// // void printLL(Node* head) {
// //     Node* temp = head;

// //     while(temp!=NULL) {
// //         cout << temp->data << " ";
// //         temp = temp -> next;
// //     }
// //     cout << endl;
// // }


// // //Main function
// // int main() {
// //     Node* first = new Node(10);
// //     Node* second = new Node(20);
// //     Node* third = new Node(30);
// //     Node* fourth = new Node(40);
// //     Node* fifth = new Node(50);

// //     first -> next = second;
// //     second -> next = third;
// //     third -> next = fourth;
// //     fourth -> next = fifth;

// //     Node* head = first;
// //     cout << "Printing Linked List: ";
// //     printLL(head);
// //     cout << endl;
// //     Node* head = first;
// //     cout << "Printing Length of Linked List: ";
// //     getLength(head);

// //     return 0;
// // }
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node() {
//         this -> next = NULL;
//     }

//     Node(int data) {
//         this -> data = data;
//         this ->next = NULL;
//     }
// };

// void insertAtHead(Node* &head, Node* &tail, int data) {
//     //corner case
//     if(head == NULL) {
//         Node* newNode = new Node(data);

//         head = newNode;
//         tail = newNode;
//     }

//     else {
//         Node* newNode = new Node(data);
//         newNode -> next = head;
//         head = newNode;
//     }
// }

// void insertAtTail(Node* &head, Node* &tail, int data) {
//     //corner case
//     if(head == NULL) {
//         Node* newNode = new Node(data);

//         head = newNode;
//         tail = newNode;
//     }

//     else {
//         Node* newNode = new Node(data);
//         tail -> next = newNode;
//         tail = newNode;
//     }
// }
// void printLL(Node* head){
//     Node* temp = head;
//     while(temp!=NULL) {
//         cout << temp->data << " ";
//         temp = temp -> next;
//     }
//     cout << endl;
// } 
// int getLength(Node* head)
// {
//     Node* temp = head;
//     int count = 0;

//     while (temp != NULL)
//     {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }
// void insertAtPosition(Node* head, Node* tail, int data, int position) {
//     int length = getLength(head);

//     if (position>=1) {
//         insertAtHead(head, tail, data);
//     }

//     else if(position>length) {
//         insertAtTail(head, tail, data);
//     }

//     else {
//         Node* newNode = new Node(data);

//         Node* prev =  NULL;
//         Node* curr = head;

//         while(position!=1) {
//             prev = curr;
//             curr = curr->next;
//             position--;
//         }

//         prev->next = newNode;
//         newNode->next = curr;
//     }
// }

// void createTail(Node* &head, Node* &tail) {
//     Node* temp = head;

//     while(temp->next != NULL) {
//         temp = temp-> next;
//     }
//     tail = temp;
// }

// // int getLength(Node* head)
// // {
// //     Node* temp = head;
// //     int count = 0;

// //     while (temp != NULL)
// //     {
// //         count++;
// //         temp = temp->next;
// //     }
// //     return count;
// // }

// void deletefromHead(Node* &head, Node* &tail) {
//     //corner cases ko dekhenge -> Empty & second
//     if(head == NULL) {
//         cout << "No Element present in LL!";
//         return;
//     }

//     if(head == tail) {
//         Node* temp = head;
//         delete temp;

//         head->next = NULL;
//         tail->next = NULL;
//     }

//     Node* temp = head;
//     head = temp->next;
//     temp->next = NULL;
//     delete temp;
// }

// void deletefromTail(Node* &head, Node* &tail) {
//     //corner cases -> Empty & Single Element
//     if(head == NULL) {
//         cout << "Empty Linked List!";
//         return;
//     }

//     if(head == tail) {
//         Node* temp = head;
//         delete temp;

//         head -> next = NULL;
//         tail -> next = NULL;
//     }

//     Node* prev = head;
//     while(prev->next!= tail) {
//         prev = prev ->next;
//     }
//     prev -> next = NULL;
//     delete tail;
//     tail = prev;

// }

// void deletefromPos(Node* &head, Node* &tail, int position) {
//     if(head==NULL) {
//         cout << "Linked List is empty";
//         return;
//     }

//     if(head==tail) {
//         Node* temp = head;
//         delete temp;

//         head -> next = NULL;
//         tail -> next = NULL;
//     }

//     if(position==1) {
//         deletefromHead(head, tail);
//     }

//     else if(position == getLength(head)) {
//         deletefromTail(head, tail);
//     }

//     else {
//         Node* prev = NULL;
//         Node* curr = head;

//         while(position!=1) {
//             prev = curr;
//             curr = curr -> next;
//             position--;
//         }

//         prev->next = curr ->next;
//         curr->next = NULL;
//         delete curr;
//     }
// }


// int main()
// {
//     Node* head = NULL;
//     Node* tail = NULL;
//     cout<<"Inserting Element at Head: ";
//     insertAtHead(head, tail, 10);
//     printLL(head);
//     cout << "Inserting Element at Tail: ";
//     insertAtTail(head, tail, 20);
//     printLL(head);
//     // insertAtPosition(head, tail, 505, 5);
//     // printLL(head);
//     // cout << "Deleting Element from Head: ";
//     // deletefromHead(head, tail);
//     deletefromTail(head, tail);
//     cout << "Deleting Element from Tail: ";
//     printLL(head);
//     insertAtHead(head, tail, 110);
//     insertAtHead(head, tail, 120);
//     insertAtHead(head, tail, 130);
//     printLL(head);
//     cout << "Deleting Element from Tail: ";
//     deletefromTail(head, tail);
//     printLL(head);

//     cout << "Deleting Element from positon 2";
//     deletefromPos(head, tail, 2);
//     printLL(head);
//     return 0;
// }

