class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> SkipLength;

        string result;

        for(char &ch : s){
            if(ch == '(') {
                SkipLength.push(result.length());
            }

            else if (ch==')') {
                int l = SkipLength.top();
                SkipLength.pop();
                reverse(begin(result)+l, end(result));
            } else {
                result.push_back(ch);
            }
        }

        return result;
    }
};

class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> SkipLength;

        string result;

        for(char &ch : s){
            if(ch == '(') {
                SkipLength.push(result.length());
            }

            else if (ch==')') {
                int l = SkipLength.top();
                SkipLength.pop();
                reverse(begin(result)+l, end(result));
            } else {
                result.push_back(ch);
            }
        }

        return result;
    }
};

//ap2
class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.length();
        stack<int> openBracket;
        vector<int> door(n);

        // First pass: Pair up parentheses
        for (int i = 0; i < n; ++i) {
            if (s[i] == '(') {
                openBracket.push(i);
            } else if (s[i] == ')') {
                int j = openBracket.top();
                openBracket.pop();
                door[i] = j;
                door[j] = i;
            }
        }

        // Second pass: Build the result string
        string result;
        int direction = 1; //Left to Right
        for (int i = 0; i < n; i += direction) {
            if (s[i] == '(' || s[i] == ')') {
                i = door[i];
                direction = -direction;
            } else {
                result += s[i];
            }
        }
        return result;
    }
};
