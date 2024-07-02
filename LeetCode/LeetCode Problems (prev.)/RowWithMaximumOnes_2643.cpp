#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans;
        int rowSize=mat.size(); 
        int colSize = mat[0].size();

        int oneCount = INT_MIN;
        int rowNo = -1; //kuch bhi no de skte hain

        for(int i=0; i<rowSize; i++) {
            int count =0; //for counting 1's in a row
            for(int j=0; j<colSize; j++) {
                if(mat[i][j]==1) { 
                    count++; //jab 1 milega toh count ko badha te rhenge 
                }
            }

            if(count>oneCount) {
                oneCount = count; //agar rowwise count ki value jyada aayi toh oneCount ko update krdene
                rowNo = i; //also rowN0 ko bhi update krdenge, then agli row mai jayenge or counting krenge 
            }
        }

        ans.push_back(rowNo);
        ans.push_back(oneCount);
        return ans;
    }
};