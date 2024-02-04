#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//Implementation of two stack using a dynamic array
// class Stack{
//     public:
//     int* arr;
//     int size;
//     int top1;
//     int top2;

//     Stack(int size) {
//         this -> arr = new int[size];
//         this -> size = size;
//         this -> top1 = -1;
//         this -> top2 = size;
//     }

//     void push1(int data) {
//         if(top2 - top1 == 1) {
//             cout << "Overflow" << endl;
//             return;
//         }

//         else {
//             top1++;
//             arr[top1]=data;
//         }
//     }

//     void push2(int data) {
//         if(top2 - top1 == 1) {
//             cout << "Overflow" << endl;
//             return;
//         }

//         else {
//             top2--;
//             arr[top2] = data;
//         }
//     }

//     void pop1() {
//         if(top == -1) {
//             cout << "Underflow" << endl;
//             return;
//         }

//         else {
//             arr[top1] = 0;
//             top--;
//         }
//     }

//     void pop2() {
//         if(top2 == size) {
//             cout << "Underflow" << endl;
//             return;
//         }

//         else {
//             arr[top2] = 0;
//             top2++;
//         }
//     }
// }

// Stack1 ko hum left ti right impelement kr rhe hain, or Stack2 ko right se left impelement kr rhe hain
// thats why 
// -> for PUSH, stack 1 top1++ krkr fhir arr[top1] = data kr rhe hain and in stack 2 pehle top2-- krke fhir arr[top2] = data 
// -> for POP, stack 1 mai pehle arr[top] = 0 krke top-- krte hain, in stack 2 mai pehle arr[top2] == 0 krke fhir top2++ krte hain 

//Remove Rebundant brackets

#include<iostream>
#include<stack>
using namespace std;

bool checkRebundant(string &str) {
    stack<char> st;

    //string mai traverse krenge
    for(int i=0; i<str.length(); i++) {
        char ch = str[i];

        if( ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        }

        else if(ch == ')') {
            int operatorCount = 0;
            while(!st.empty() && st.top()!='(') {
                char temp = st.top();
                if(temp == '+' || temp == '-' || temp == '/' || temp == '*') {
                    operatorCount++;
                }
                st.pop();
            }
            st.pop();
            if(operatorCount == 0) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    string str = "((a+b)*(c+d))";
    bool ans = checkRebundant(str);
    if(ans) {
        cout << "Rebundant Brackets present" << endl;
    }
    else {
        cout << "Rebundat Brackets are not present" <<endl;
    }
    return 0;
}