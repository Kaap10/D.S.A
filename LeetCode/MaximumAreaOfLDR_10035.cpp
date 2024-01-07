class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& a) {
        int i,j,n,LongestDiagonal,Area,LongestDiagonal1, Area1;
        n=a.size(); //size nikala
        LongestDiagonal=0; //Longest Diagnol ki 0 se intialize krliya
        Area=0; // area ko bhi 0 se intialize kradiya
        for (i=0;i<n;i++) 
        {
            LongestDiagonal1=a[i][0]*a[i][0]+a[i][1]*a[i][1]; 
            Area1=a[i][0]*a[i][1];
            if ((LongestDiagonal1>LongestDiagonal)||((LongestDiagonal1==LongestDiagonal)&&(Area1>Area)))
                //Ya toh LD1 > LD hoga OR (LD1 == LD && Area>Area)
            {
                LongestDiagonal=LongestDiagonal1; //LD1 update krdenge
                Area=Area1; //Area1 update krdenge
            }
        }
        return Area;
    }
};

// class Solution {
// public:
//     int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
//         int n=dimensions.length();
        
//         for(int i=0; i<n; i++) {
            
//             int lenght = dimensions[0];
//             int width = dimensions[1];
            
//             int DiagonalLenght=sqrt(lenght*lenght + width*width);
//         }
// //         if(DiagonalLenght[0] > DigonalLenght[1]) {
// //             int greaterLenght = lenght*lenght;
// //             return greaterLenght;
// //         } 
//            int maxDiagonal=0;
//            int maxArea=0;
//            if (diagonal > maxDiagonal || (diagonal == maxDiagonal && length * width > maxArea)) {
//             maxDiagonal = diagonal;
//             maxArea = length * width;
//         }
//         else  {
//             return greaterLenght;
//         }
        
//     }
    
//     int main() {
//         int dimensions = {[9,3],[8,6]};
//         areaOfMaxDiagonal();
//         return 0;
        
// }
// };

