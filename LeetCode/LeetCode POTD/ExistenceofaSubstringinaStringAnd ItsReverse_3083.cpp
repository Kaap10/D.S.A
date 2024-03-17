class Solution {
public:
    bool isSubstringPresent(std::string s) {
        if (s.length() < 2) return false; 
        
        for (int i = 0; i < s.length() - 1; ++i) {
            char c1 = s[i];
            char c2 = s[i + 1];
            
            for (int j = s.length() - 1; j > i; --j) {
                if (s[j] == c1 && s[j - 1] == c2) {
                    return true;
                }
            }
        }
        
        return false;
    }
};
