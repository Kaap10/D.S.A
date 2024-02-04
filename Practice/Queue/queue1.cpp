#include<iostream>
#include<queue>
using namespace std;
//queue-1 
// -> insertion at REAR
// -> deletions at FONT

//STL QUEUE
// int main() {
//     queue<int> q;
//     q.push(4);
//     cout << "Size of Queue: "<<q.size() << endl;
//     if(q.empty()) {
//         cout << "Queue is empty! ";
//     }
//      else {
//         cout << "Queue is not empty";
//      }

//      q.pop();
//      q.push(10);
//      q.push(20);
//      q.push(30);

//      cout << "Front element of Queue is: " << q.front() << endl;
//      cout << "Rear element of Queue is: " << q.back() << endl;
//      return 0;
// }

//Queue implementation using Queue
// class Queue {
//     public:
//     int *arr;
//     int size;
//     int front;
//     int rear;

//     Queue(int size) {
//         arr = new int[size];
//         this-> size = size;
//         front = -1;
//         rear = -1;
//     }

//     void push(int val) {
//         if(rear==size-1) {
//             cout << "Overflow Queue" << endl;
//             return;
//         }

//         else if(front == -1 && rear == -1){
//             front++;
//             rear++;
//             arr[rear] = val;
//         }
//         else {
//             rear++;
//             arr[rear] = val;
//         }
//     }

//     void pop() {
//         if(front==-1 && rear==-1) {
//             cout << "Underflow" << endl;
//         }

//         else if(front == rear){
//             arr[front] = -1;
//             front = -1;
//             rear = -1;
//         }

//         else {
//             arr[front] = -1;
//             front++;
//         }
//     }

//     int getSize() {
//         if(front==-1 && rear==-1) {
//             return 0;
//         }

//         else {
//             return false;
//         }
//     }

//     int getFront() {
//         if(front==-1) {
//             return -1;
//         }
//         else {
//             return arr[front];
//         }
//     }

//     int getRear() {
//         if(rear==-1) {
//             return -1;
//         }
//         else {
//             return arr[rear];
//         }
//     }

//     void print() {
//         cout << "Front Index: "<<front<<endl;
//         cout << "Rear Index: "<<rear<<endl;
//         cout << "Size of Queue: "<<getSize()<<endl;
//         cout << "Printing Queue: ";
//         for(int i=0; i<size; i++) {
//             cout << arr[i] <<" ";
//         }
//         cout << endl << endl;
//     }
// };

// int main(){
//     int size = 5;
//     // Create Queue
//     Queue q(size);
//     q.print();

//     q.push(10);
//     q.print();

//     q.push(20);
//     q.print();

//     q.push(30);
//     q.print();

//     q.push(40);
//     q.print();

//     q.push(50);
//     q.print();

//     q.push(60);
//     q.print();

//     q.pop();
//     q.print();

//     q.pop();
//     q.print();

//     q.pop();
//     q.print();

//     q.pop();
//     q.print();
    
//     // ⭐ JAB front and rear array ke last index par honge
//     // To iss code ki help se hum 800 ko insert nhi kar skte hai 
//     // joki queue ki algorith ke according array ki 0th index par insert
//     // hona chaiye
//     // iska mtlb memory space waste ho rha hai -- Iska resolution Circular Queue hai
//     q.push(800);
//     q.print();

//     q.pop();
//     q.print();

//     q.push(100);
//     q.print();

//     return 0;
}

//Circular Queue
class CQueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    CQueue(int size) {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void Push(int val){
        if((front==0 && rear== -1) || (rear = front-1)) {
            cout << "Overflow" <<endl;
            return;
        }

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

    void pop() {
        if(front == -1 && rear == -1) {
            cout << "underflow queue" <<endl;
            return;
        }

        else if(front == rear)front = size-1  {
            {
            arr[front] = -1;
            fornt = -1;
            rear = -1;
        }

        else if(front = size-1) {
            arr[front] = -1;
            front++;
    }
}
