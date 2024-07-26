class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(auto brac : s) {
            if(brac == '(' || brac == '{' || brac == '[') {
                st.push(brac);
            }

            else {
                if(st.size()==0) return false;

                char ch = st.top();
                st.pop();

                if(ch=='(' && brac==')' || ch=='{' && brac=='}' || ch=='[' && brac==']') continue;
                else return false;
            }
        }
        return st.empty();
    }
};