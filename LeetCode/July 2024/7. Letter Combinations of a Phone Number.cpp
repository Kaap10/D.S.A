class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};

        vector<string> result;
        string combination;
        vector<string>digit2letters = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        backtrack(result,digit2letters,  combination,  digits, 0);
        return result;
    }

    void backtrack(vector<string>& result, const vector<string>& digitToLetters, string& combination, const string& digits, int index) {
        if (index == digits.length()) {
            result.push_back(combination);
            return;
        }
        
        int digit = digits[index] - '0';
        const string& letters = digitToLetters[digit];
        
        for (char letter : letters) {
            combination.push_back(letter);
            backtrack(result, digitToLetters, combination, digits, index + 1);
            combination.pop_back();
        }
    }
};