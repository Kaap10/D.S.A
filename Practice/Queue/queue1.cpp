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
class Queue {
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size) {
        arr = new int[size];
        this-> size = size;
        front = -1;
        rear = -1;
    }

    void push(int val) {
        
    }
}
