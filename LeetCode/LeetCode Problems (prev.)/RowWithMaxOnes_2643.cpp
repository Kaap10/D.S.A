class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int rowSize = mat.size();
        int colSize = mat[0].size();

        int oneCount = INT_MIN;
        int rowNo = -1;
        vector<int> ans; //alag se -> ans name ka vector banake sotre krenge

        for (int i=0; i<rowSize; i++) {
            int sum = 0; // sum ko 0 se intiliaze krenge
            for(int j=0; j<colSize; j++) {
                if(mat[i][j]==1) {
                    sum++;
                }
            }

            if(sum>oneCount) {
                oneCount = sum;
                rowNo = i;
            }
        }

        ans.push_back(rowNo);
        ans.push_back(oneCount);
        return ans;
    }
};