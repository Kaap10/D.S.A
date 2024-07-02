class Solution {
public:
  vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
    int n = grid.size();
    vector<vector<int>> res(n - 2, vector<int>(n - 2)); // Result matrix

    for (int i = 0; i < n - 2; i++) {
      for (int j = 0; j < n - 2; j++) {
        int currMax = grid[i][j]; 

        for (int p = i; p < i + 3; p++) {
          for (int q = j; q < j + 3; q++) {
            currMax = max(currMax, grid[p][q]); 
          }
        }

        res[i][j] = currMax; 
      }
    }

    return res;
  }
};
