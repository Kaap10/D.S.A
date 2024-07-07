class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n = s.length();
        string encrypted = "";

        for (int i = 0; i < n; ++i) {
            char new_char = s[(i + k) % n];
            encrypted += new_char;
        }

        return encrypted;
    }
};