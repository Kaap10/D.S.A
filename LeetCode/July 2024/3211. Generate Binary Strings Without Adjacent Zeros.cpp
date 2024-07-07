class Solution {
public:
    void generateStrings(int n, string current, vector<string>& result) {
        if (current.length() == n) {
            result.push_back(current);
            return;
        }
        
        generateStrings(n, current + "1", result);
        
        if (current.empty() || current.back() != '0') {
            generateStrings(n, current + "0", result);
        }
    }
    
    vector<string> validStrings(int n) {
        vector<string> result;
        generateStrings(n, "", result);
        return result;
    }
};