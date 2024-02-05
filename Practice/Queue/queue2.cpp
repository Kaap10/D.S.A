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

class CDqueue{
    public:
    int* arr;
    int size;
    int front;
    int rear;

    CDqueue(int size) {
        arr = new int[size];
        this -> size = size;
        front = -1;
        rear = -1;
    }
    //Normally POP_front & Push_back hota tha but POP_back & Push_front

    void pushFront(int val) {
        //overflow
        if((front==0 && rear = size-1) || (rear == front-1)) {
            cout << "Overflow Queue" << endl;
            return;
        }

        //Empty queue
        else if(front == -1 && rear== -1) {
            front++;
            rear++;
            arr[front] = val;
        }

        //Circular queue
        else if(front==0 && rear!=size-1) {
            front = size-1;
            ans[front]= val;
        }

        else {
            front--;
            ans[front] = val;
        }
    }

    void popFront() {
        //undeflow
        if(front==-1 && rear==-1) {
            cout << "Underflow Queue" << endl;
            return;
        }

        //single elememt queue
        else if(front == rear) {
            ans[front] = -1;
            front = -1;
            rear = -1;
        }

        //circular queue
        else if(front == size-1) {
            ans[front] = -1;
            front=0;
        }
    }

    void pushBack(int val) {
        //overflow
        if((front==0 && rear==size-1) || (rear = front-1)) {
            cout << "Overflow Queue" << endl;
            return;
        }

        //empty queue
        else if(front==-1 && rear == -1) {
            front++;
            rear++;
            arr[rear] = val;
        }

        else if(rear = size-1 && front!=0) {
            rear = 0;
            arr[rear] = val;
        }

        else {
            rear++;
            arr[rear] = val;
        }
    }

    void popBack() {
        //underflow
        if(front==-1 && rear==-1) {
            cout << "Underflow queue" << endl;
            return;
        }

        //single element
        else if(front==rear) {
            arr[rear] = -1;
            front=-1;
            rear = -1;
        }

        else if(rear==0) {
            arr[rear] = 0;
            rear = size-1;
        }

        else {
            arr[rear] = -1;
            rear--;
        }
        }
    }
}