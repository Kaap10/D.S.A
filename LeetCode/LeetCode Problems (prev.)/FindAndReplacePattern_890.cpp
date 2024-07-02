class Solution {
public:

    void CreateUpdateMapping(string &str) {
        char start='a';
        char mapping[300] = {0};
        for(auto ch: str) {
            if(mapping[ch] == 0) {
                mapping[ch] = start;
                start++;
            }
        }
        for(int i=0; i<str.length(); i++) {
            char ch = str[i];
            str[i] = mapping[ch];
        }
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        CreateUpdateMapping(pattern);
        for(string str:words) {
            string tempStr = str;
            CreateUpdateMapping(tempStr);
            if(tempStr==pattern) {
                ans.push_back(str);
            }
        }
        return ans;
    }
};