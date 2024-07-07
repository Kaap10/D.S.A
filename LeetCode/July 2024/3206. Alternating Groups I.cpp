class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n = colors.size();
        int count = 0;

        for (int i = 0; i < n; ++i) {
            int left = i;
            int middle = (i + 1) % n;
            int right = (i + 2) % n;

            if (colors[left] != colors[middle] && colors[middle] != colors[right]) {
                ++count;
            }
        }

        return count;
    }
};