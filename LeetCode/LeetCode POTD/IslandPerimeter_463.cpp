class Solution {
public:
    int m;
    int n;
    int perimeter;
    
    void dfs(vector<vector<int>>& grid, int i, int j) {
        
        if(i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0) {
            perimeter++;
            return;
        }
        
        if(grid[i][j] == -1) {
            return;
        }
        
        grid[i][j] = -1;
        
        dfs(grid, i+1, j);
        dfs(grid, i-1, j);
        dfs(grid, i, j+1);
        dfs(grid, i, j-1);
        
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        m    = grid.size();
        n    = grid[0].size();
        perimeter = 0;
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                
                if(grid[i][j] == 1) {
                    dfs(grid, i, j);
                    return perimeter;
                }
                
            }
        }
        
        return -1;
    }
};

//APPROACH-2
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        int perimeter = 0;
        for(int i = 0; i<m; i++) {
            for(int j = 0; j<n; j++) {
                if(grid[i][j] == 0)
                    continue;
                
                if(i-1 < 0 || grid[i-1][j] == 0) //up
                    perimeter++;
                
                if(i+1 >= m || grid[i+1][j] == 0) //down
                    perimeter++;
                
                if(j-1 < 0 || grid[i][j-1] == 0) //left
                    perimeter++;
                
                if(j+1 >= n || grid[i][j+1] == 0) //right
                    perimeter++;
                
            }
        }
        
        return perimeter;
    }
};