class Solution{
    vector<vector<int>> modifiedMatrix(vector<vector<int>> &matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> answer = matrix;

        for(int i=0; i<m; i++) {
            maxVal = INT_MIN;

            for(int j=0; j<n; j++) {
                maxVal = max(maxVal, matrix[i][j]);
            }
        }

        for(int i=0; i<m; i++) {
            if(matrix[i][j]==-1) {
                matrix[i][j] = maxVal;
            }
        }
    }
    return answer;
}