class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long count = 0;
        long long subStrings = 0;

        for (char &ch : s) {
            if(ch == c) {
                subStrings += (1+count);
                count++;
            }
        }
        return subStrings;
    }
};