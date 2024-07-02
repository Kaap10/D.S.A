//Approach-1 (using Brute force)
// class Solution {
// public:
//     int pivotInteger(int n) {
//         if(n==1) {
//             return 1;
//         }

//         for(int pivot = 1; pivot <= n; pivot++) {
//             int leftSum = 0;
//             int rightSum = 0;

//             for(int i=0; i<=pivot; i++) {
//                 leftSum = leftSum + i;
//             }

//             for(int j=pivot; j<=n; j++) {
//                 rightSum = rightSum + j;
//             }

//             if(leftSum == rightSum) {
//                 return pivot;
//             }
//         }
//         return -1;
//     }
// };

//Approach-2 (using Maths formula)
// class Solution{
//     public:
//     int pivotInteger(int n) {
//         if(n==1) {
//             return 1;
//         }

//         int totalSum = n * (n+1)/2;
//         for(int pivot = 1; pivot<=n; pivot++) {
//             int leftSum = pivot * (pivot+1)/2;
//             int rightSum = totalSum - leftSum + pivot;
//             if(leftSum == rightSum ) {
//                 return pivot;
//             }
//         }
//         return -1;
//     }
// };

//Approach-3 (using two pointers)
// class Solution {
// public:
//     int pivotInteger(int n) {
//         if(n == 1)
//             return 1;
        
//         int i = 1;
//         int j = n;
        
//         int frontSum = 1;
//         int backSum  = n;

        
//         while(i < j) {
            
//             if(frontSum < backSum) {
//                 i++;
//                 frontSum += i;
//             } else {
//                 j--;
//                 backSum += j;
//             }

//         }
//         return frontSum == backSum ? i : -1;
//     }
// };

//Appraoch-4 (using binary search)
// class Solution {
// public:
//     int pivotInteger(int n) {
//         if(n == 1)
//             return 1;
        
//         int totalSum = n * (n+1)/2;
        
        
//         int left = 1, right = n;
        
//         while(left <= right) {
            
//             int mid_pivot = left + (right-left)/2;
            
//             if(mid_pivot * mid_pivot == totalSum) {
//                 return mid_pivot;
//             } else if(mid_pivot * mid_pivot < totalSum) {
//                 left = mid_pivot+1;
//             } else {
//                 right = mid_pivot-1;
//             } 
//         }
        
//         return -1;
//     }
// };

//Approach -5 (using maths)
class Solution {
public:
    int pivotInteger(int n) {
        if(n == 1)
            return 1;
        
        int totalSum = n * (n+1)/2;
        
        int pivot = sqrt(totalSum);
        
        if(pivot*pivot == totalSum)
            return pivot;
        
        return -1;
        
    }
};