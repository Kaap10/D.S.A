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