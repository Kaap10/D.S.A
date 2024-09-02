class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if(n==0) return "";

        int maxLength = 1;
        int start = 0;

        auto isPalindrome = [&](int left, int right) {
            while(left<=right) {
                if(s[left]!=s[right]) {
                    return false;
                }
                left++;
                right--;
            }
            return true;
        };

        for(int i=0; i<n; i++) {
            for(int j=i; j<n; j++) {
                if(isPalindrome(i,j) && (j-i+1) > maxLength) {
                    start = i;
                    maxLength = j-i+1;
                }
            }
        }

        return s.substr(start, maxLength);
    }
};