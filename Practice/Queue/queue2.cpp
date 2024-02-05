#include<iostream>
using namespace std;

// class Cqueue{
//     public:
//     int* arr;
//     int size;
//     int front;
//     int rear;

//     Cqueue(int size) {
//         arr = new int arr[size];
//         this -> size = size;
//         front = -1;
//         rear = -1;
//     }

//     void push(int val){
//         //overflow 
//         if(front==0 && rear == size-1 || (rear == front -1)) {
//             cout << "Overflow" << endl;
//             return;
//         } 

//         //empty queue
//         else if(front == -1 && rear == -1) {
//             front++;
//             rear++;
//             arr[rear] = val;
//         }

//         //circular queuue
//         else if(rear = size-1 && front!=0) {
//             rear = 0;
//             arr[rear] = val;
//         }

//         else {
//             rear++;
//             arr[rear] = val;
//         }
//     }

//     void pop() {
//         //underflow
//         if(front==-1 && rear==-1) {
//             cout << "Underflow queue" << endl;
//             return;
//         }

//         else if(front == rear) {
//             arr[front] = -1;
//             front = -1;
//             rear = -1;
//         }

//         else if(front == size-1) {
//             arr[front] = -1;
//             front = 0;
//         }

//         else {
//             arr[front] = -1;
//             front++;
//         }
//     }
// }

//Implemention Circular Double ended queue using Dynamic array

// class CDqueue{
//     public:
//     int* arr;
//     int size;
//     int front;
//     int rear;

//     CDqueue(int size) {
//         arr = new int[size];
//         this -> size = size;
//         front = -1;
//         rear = -1;
//     }
//     //Normally POP_front & Push_back hota tha but POP_back & Push_front

//     void pushFront(int val) {
//         //overflow
//         if((front==0 && rear = size-1) || (rear == front-1)) {
//             cout << "Overflow Queue" << endl;
//             return;
//         }

//         //Empty queue
//         else if(front == -1 && rear== -1) {
//             front++;
//             rear++;
//             arr[front] = val;
//         }

//         //Circular queue
//         else if(front==0 && rear!=size-1) {
//             front = size-1;
//             ans[front]= val;
//         }

//         else {
//             front--;
//             ans[front] = val;
//         }
//     }

//     void popFront() {
//         //undeflow
//         if(front==-1 && rear==-1) {
//             cout << "Underflow Queue" << endl;
//             return;
//         }

//         //single elememt queue
//         else if(front == rear) {
//             ans[front] = -1;
//             front = -1;
//             rear = -1;
//         }

//         //circular queue
//         else if(front == size-1) {
//             ans[front] = -1;
//             front=0;
//         }
//     }

//     void pushBack(int val) {
//         //overflow
//         if((front==0 && rear==size-1) || (rear = front-1)) {
//             cout << "Overflow Queue" << endl;
//             return;
//         }

//         //empty queue
//         else if(front==-1 && rear == -1) {
//             front++;
//             rear++;
//             arr[rear] = val;
//         }

//         else if(rear = size-1 && front!=0) {
//             rear = 0;
//             arr[rear] = val;
//         }

//         else {
//             rear++;
//             arr[rear] = val;
//         }
//     }

//     void popBack() {
//         //underflow
//         if(front==-1 && rear==-1) {
//             cout << "Underflow queue" << endl;
//             return;
//         }

//         //single element
//         else if(front==rear) {
//             arr[rear] = -1;
//             front=-1;
//             rear = -1;
//         }

//         else if(rear==0) {
//             arr[rear] = 0;
//             rear = size-1;
//         }

//         else {
//             arr[rear] = -1;
//             rear--;
//         }
//         }
//     }
// }

//REVERSE QUEUE - using Stack
// void ReverseQueue(queue<int> &q) {
//     stack<int> st;

//     while(!q.empty()) {
//         int frontElement = q.front();
//         q.pop();
//         st.push(frontElement);
//     }

//     while(!st.empty()) {
//         int topElement = st.top();  
//         st.pop();
//         q.push(topElement);
//     }
// }

// //Reverse queue (using Recursion)
// void reverseQueueRE(queue<int> &q) {
//     if(q.empty()) return;
//     int temp = q.front();
//     q.pop();
//     reverseQueueRE(q);
//     q.push(temp);
// }

// //Reverse K Elements in Queue
// void ReverseKEqueue(queue<int> &g, int k) {
//     stack<int> st;
//     int n = q.size();

//     for(int i=0; i<k; i++) {
//         int frontElement = q.front();
//         q.pop();
//         st.push(frontElement);
//     }

//     for(int i=k; i<n; i++) {
//         int topElement = st.top();
//         st.top();
//         q.push(topElement);
//     }

//     for(int i=0; i<(n-k); i++) {
//         int frontElement = q.front();
//         q.pop();
//         q.push(frontElement);
//     }
// }

// INTERLEAVE first and second half of a queue
void interLeaveQueue(queue<int> &first) {
    queue<int> second;
    int n = first.size();

    for(int i=0; i<(size/2); i++) {
        int fFront = first.front();
        first.pop();
        second.push(fFront);
    }

    while(!second.empty()) {
        int fFront = second.front();
        second.pop();
        first.push(fFront);

        int fFront = first.front();
        first.pop();
        first.push(fFront);
    }
}