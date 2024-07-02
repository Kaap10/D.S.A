class Solution {
public:
    int minimumPushes(string word) {
        int ans = 0;
        int n = word.length();
        int i=1;
        int j=1;
        while(i<=n) {
            ans = ans + j;
            if(i%8==0) {
                j++;
            }
            i++;
        }
        return ans;
    }
};