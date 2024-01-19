//linked list has 4 types 1. Single linked list 2. Double linked list 3. Circular linked list 4. Double Circular Linked list

//creating linked list and a node

#include<iostream>
using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;

//     Node() { //agar node mai kuch nhi hua 
//         this -> next = NULL;
//     }
//     Node(int data) { //agar node mai kuch data present hua toh
//         this -> data = data;
//         this -> next = NULL;
//     }
// };

// //linked list ki length check krne ke liye
// int getLength(Node* head) {
//     Node* temp = head;
//     int count = 0;

//     while(temp!=NULL) {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

// //print kene ke liye function 
// void printLL(Node* head) {
//     Node* temp = head;

//     while(temp!=NULL) {
//         cout << temp->data << " ";
//         temp = temp -> next;
//     }
//     cout << endl;
// }


// //Main function
// int main() {
//     Node* first = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* fifth = new Node(50);

//     first -> next = second;
//     second -> next = third;
//     third -> next = fourth;
//     fourth -> next = fifth;

//     Node* head = first;
//     cout << "Printing Linked List: ";
//     printLL(head);
//     cout << endl;
//     Node* head = first;
//     cout << "Printing Length of Linked List: ";
//     getLength(head);

//     return 0;
// }
class Node{
    public:
    int data;
    Node* next;

    Node() {
        this -> next = NULL;
    }

    Node(int data) {
        this -> data = data;
        this ->next = NULL;
    }
};

void insertAtHead(Node* &head, Node* &tail, int data) {
    //corner case
    if(head == NULL) {
        Node* newNode = new Node(data);

        head = newNode;
        tail = newNode;
    }

    else {
        Node* newNode = new Node(data);
        newNode -> next = head;
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data) {
    //corner case
    if(head == NULL) {
        Node* newNode = new Node(data);

        head = newNode;
        tail = newNode;
    }

    else {
        Node* newNode = new Node(data);
        tail -> next = newNode;
        tail = newNode;
    }
}
void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL) {
        cout << temp->data << " ";
        temp = temp -> next;
    }
    cout << endl;
} 
int getLength(Node* head)
{
    Node* temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void insertAtPosition(Node* head, Node* tail, int data, int position) {
    int length = getLength(head);

    if (position>=1) {
        insertAtHead(head, tail, data);
    }

    else if(position>length) {
        insertAtTail(head, tail, data);
    }

    else {
        Node* newNode = new Node(data);

        Node* prev =  NULL;
        Node* curr = head;

        while(position!=1) {
            prev = curr;
            curr = curr->next;
            position--;
        }

        prev->next = newNode;
        newNode->next = curr;
    }
}

void createTail(Node* &head, Node* &tail) {
    Node* temp = head;

    while(temp->next != NULL) {
        temp = temp-> next;
    }
    tail = temp;
}

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

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 10);
    printLL(head);
    insertAtTail(head, tail, 20);
    printLL(head);
    insertAtPosition(head, tail, 505, 5);
    printLL(head);
    return 0;
}


