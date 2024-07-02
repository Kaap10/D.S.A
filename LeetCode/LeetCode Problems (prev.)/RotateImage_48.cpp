class Solution {
public:
// Approach: Teanspose -> Reverse -> 90deg
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size(); //matrix ka size

        //transpose nikalo
        for(int i=0; i<n; i++) {
            for (int j=i; j<matrix.size(); j++) { //galti krdi thi (i=j) nhi hoga, (j=i) is right 
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        //reverse krdo transpose ko
        for (int i=0; i<n; i++) {
            reverse(matrix[i].begin(), matrix[i].end()); 
            //vector ke case mai matrix[i].begin() ya end() use kr skte hain, or in case of an Array use -> reverse(arr, arr+n) OR we can make new fucntion to reverse it 

            /*void ReverseVector(vector<int> &arr) {
                int size = arr.size();
                int start =0;
                int end = size -1;

                while(start<=end) {
                    sawp(arr[start], arr[end]);
                    start++;
                    end--;
                }
            } 
            
            void rotate(vector<vector<int>>& matrix)
            
            for(int i=0; i<n; i++) {
                reverseVector(matrix[i]);
            }*/
        }
    }
};