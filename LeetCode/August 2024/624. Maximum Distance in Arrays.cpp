class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int minVal= arrays[0][0]; //min val
        int maxVal = arrays[0].back();
        int maxDist = 0;

        for(int i=1; i<arrays.size(); i++) {
            int dist1 = abs(arrays[i].back() - minVal);
            int dist2 = abs(maxVal - arrays[i][0]);

            maxDist = max(maxDist, max(dist1, dist2));

            minVal = min(minVal, arrays[i][0]);
            maxVal = max(maxVal, arrays[i].back());
        }

        return maxDist;
    }
};