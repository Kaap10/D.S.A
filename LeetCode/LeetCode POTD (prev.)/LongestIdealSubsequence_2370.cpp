class Solution {
public:
    int longestIdealString(string s, int k) {
        int n = s.length();

        vector<int> t(26,0);
        int result = 0;

        for(int i=0; i<n; i++) {
            int curr = s[i] - 'a';
            int leftRange = max(0, curr-k);
            int rightRange = min(25, curr+k);

            int longest = 0;
            for(int j=leftRange; j<=rightRange; j++) {
                longest = max(longest, t[j]);
            }

            t[curr] = max(t[curr], longest+1);
            result = max(result, t[curr]);

        }

        return result;
    }
};