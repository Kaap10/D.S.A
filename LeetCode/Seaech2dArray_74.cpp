class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        /*We know that 2D internally 1D ki form mai store hota hai
        2D -> 1D: index = c*i+j
        1D -> 2D: i=mid/col & j=mid%col  */
        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        int matrixSize = rowSize * colSize;

        int start =0;
        int end = matrixSize-1;
        int mid = start + (end-start)/2;

        while(start<=end) {
            //Important step
            int rowIndex = mid / colSize;
            int colIndex = mid % colSize;
            int currentNumber = matrix[rowIndex][colIndex];

            if(target==currentNumber) {
                return true; //agar target or current number same hua toh return kra denge
            }

            else if (target>currentNumber) {
                start = mid+1; //agar target bda hau toh start ko mid+1 krdenge
            }

            else {
                end = mid-1; //agar target chota hua toh end ko mid-1 krdenge
            }

            //updating mid
            mid = start + (end-start)/2;
        }
        return false;

    }
};