#include<iostream>
#include<stack>
using namespace std;

// int main() {
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     cout << st.top();

//     cout << st.size();

//     st.pop();
//     cout << st.top();       

//     if(st.empty()) {
//         cout << "Stack is empty" << endl;
//     }
//     else {
//         cout << "Stack is not empty" << endl;
//     }
//     return 0;
// }

//Implementation of stack using dynamic array
// class Stack {
//     public:
//     int* arr;
//     int size;
//     int top;

//     Stack(int size) {
//         arr = new int[size];
//         this-> size = size;
//         this -> top = -1;
//     }

//     void push(int data) {
//         //we will check overflow condition
//         if(top == size-1) {
//             cout <<"Stack is full" << endl;
//             return;
//         }
//          else {
//             top++;
//             arr[top] = data;
//          }
//     }

//     void pop() {
//         //we will check underflow condition
//         if(top == -1) {
//             cout << "Stack is empty" << endl;
//             return;
//         }
//         else {
//             top--;
//         }
//     }

//     bool isEmpty() {
//         if(top == -1) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }

//     int getTop() {
//         if(top == -1) {
//             return -1;
//         }
//         else {
//             return arr[top];
//         }
//     }

//     int getSize() {
//         return top+1;
//     }

// };

// int main()
// {
//     // Creation
//     Stack st(8);

//     // Insertion
//     st.push(10);
//     st.print();
    
//     st.push(20);
//     st.print();
    
//     // Deletion 
//     st.pop();
//     st.print();
    
//     st.pop();
//     st.print();

//     return 0;
// }

//Problem-1 [reverse string using STACK]
// int main() {
//     string str = "BABBAR"; //this is my Main String 
//     stack<char> st; //made new stack to store my char, then pop out 

//     for(int i=0; i<str.length(); i++) { //this is loop, to get all string char into stack
//         char ch = str[i]; // ch mai str[i] aata gya or push hota gya stack mai
//         st.push(ch);
//     }

//     while(!is.empty()) { //jabtak stack empty nhi hota tab tak -> st.top nikalte rho, or pop krte rho
//         cout << st.top() << " ";
//         st.pop();
//     }
//     return 0;
// }

//PROGRAM-2 [MIDDLE OF STRING]


// void solve(stack<int> &st, int pos, int &ans) {
//     if(pos==1) {
//         ans = st.top();
//         return;
//     }

//     pos--;
//     int temp = st.top();
//     st.pop();

//     solve(st, pos, ans);
//     st.push(temp);
// }

// int getMiddleElement(stack<int> &st) {
//     if(st.empty()) {
//         return -1;
//     }

//     int size = st.size();
//     int pos = 0;

//     if(size & 1) {
//         pos = (size/2) +1;
//     }
//     else {
//         pos = size/2;
//     }

//     int ans = -1;
//     solve(st, pos, ans);    
//     return ans; 
// }

// int main() {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     int mid = getMiddleElement(st);
//     cout << "Middle Element: " << mid << endl;
//     return 0;
// }

//PROGRAM-3 [INSERT AT BOTTOM OF STACK]
// void insertAtBottom(stack<int> &st, int &element) {
//     if(st.empty) {
//         st.push(element) {
//         return;
//         }
//     }

//     int temp = st.top();
//     st.pop();

//     insertAtBottom(st, element);
//     st.push(temp);
// }

//  PROGRAM-4 [Reverse stack]
// Appraoch -> 1. Reverse (insert at bottom) 2. insert at bottom (temp)
// void insertAtBottom(stack<int> &st, int &element) {
//     if(st.empty()) {
//         st.push(element);
//         return;
//     }

//     int temp = st.top();
//     st.pop();

//     insertAtBottom(st, element);
//     st.push(temp);
// }

// void reverseStack(stack<int> &st) {
//     if(st.empty()) {
//         return;
//     }

//     int element = st.top();
//     st.pop();

//     reverseStack(st);
//     insertAtBottom(st, element);
// }

// int main() {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);

//     reverseStack(st);
//     while(!st.empty()) {
//         cout << st.top() << endl;
//         st.pop();
//     }

//     return 0;
// }

// PROGRAM-5 {insert in a sorted stack}
void insertInSorted(stack<int> &st, int &element) {
    if(st.empty() || element > st.top() ) {
        st.push(element);
        return;
    }

    int temp = st.top();
    st.pop();

    insertInSorted(st, element);
    st.push(temp);
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    int element = 25;
    insertInSorted(st, element);

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}