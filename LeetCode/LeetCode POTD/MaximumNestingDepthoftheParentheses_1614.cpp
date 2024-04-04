//APPROACH-1 (using stack)
// class Solution {
// public:
//     int maxDepth(string s) {
//         stack<char> st;
//         int result = 0;

//         for(char &ch : s) {
//             if(ch=='(') {
//                 st.push(ch);
//             }
//             else if (ch==')'){
//                 st.pop();
//             }

//             result = max(result, (int)st.size());
//         }
//         return result;
//     }
// };

//APPROACH-2
class Solution {
public:
    int maxDepth(string s) {
        int openBrackets = 0;
        int result = 0;

        for(char &ch : s) {
            if(ch=='(') {
                openBrackets++;
            }
            else if (ch==')'){
                openBrackets--;
            }

            result = max(result, openBrackets);
        }
        return result;
    }
};
