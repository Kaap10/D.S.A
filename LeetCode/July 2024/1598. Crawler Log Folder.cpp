class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;

        for(string &log : logs) {
            if(log=="../") {
                // depth = depth - 1;
                // if(depth<0) {
                //     depth = 0;
                // }

                depth = max(0, depth-1);
            }

            else if(log=="./") continue;
            else depth++;
        }

        return depth;
    }
};

//approach-2
class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>st;

        for(string &log : logs) {
            if(log=="../") {
                if(!st.empty()) {
                    st.pop();
                }
            }

            else if(log=="./") continue;
            else st.push(log);
        }

        return st.size();
    }
};