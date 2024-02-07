class Solution {
public:
    int firstUniqChar(string s) {
        deque<int> q;
        int ans = -1;
        int freq[26] = {0};
        for(int i=0; i<s.length(); i++) {
            char ch = s[i];
            freq[ch-'a']++;
            q.push_back(i);

            while(!q.empty()) {
                char frontChar = s[q.front()];
                if(freq[frontChar - 'a'] > 1) {
                    q.pop_front();
                }
                else {
                    ans = q.front();
                    break;
                }
            }

            if(q.empty()) {
                ans = -1;
            }
        }
        return ans;
    }
};