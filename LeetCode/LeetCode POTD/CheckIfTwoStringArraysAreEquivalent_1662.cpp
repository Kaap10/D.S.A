class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int m = word1.size();
        int n = word2.size();
        string str1 = "";
        string str2 = "";
        for(int i=0; i<m; i++) {
            str1 = str1 + word1[i];
        }

        for(int i=0; i<n; i++) {
            str2 = str2 + word2[i];
        }

        if(str1==str2) {
            return 1;
        }

        return 0;
    }
};