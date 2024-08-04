class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<unordered_map<int, int>> colorCount(n);

        for (const auto& p : pick) {
            int player = p[0];
            int color = p[1];
            colorCount[player][color]++;
        }
        
        int winnerCount = 0;
        for (int i = 0; i < n; ++i) {
            for (const auto& entry : colorCount[i]) {
                if (entry.second > i) {
                    winnerCount++;
                    break;
                }
            }
        }

        return winnerCount;
    }
};