#include<iostream>
#include<vector>
using namespace std;

//welcome kap10 to day 3 of restart
//-> mereko array element ko shift krna by 1 element
// kaise krenge?

// 1 2 3 4 5 6 
// 6 1 2 3 4 5 
// start = 0
// end = n-1 (temp)

// int shiftElementsByOne(int arr[], int n) {
//     int start = 0;
//     int end = n-1;

//     int temp = arr[end];
//     for(int i=n; i>=1; i--) { // for(int i=0; i<n; i++)
//         arr[i]=arr[i-1];
//     }
//     //arr ke 0 ko temp banado 
//     arr[0] = temp;
// }

// int printArray(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     }
// }
// int main() {
//     int n;
//     cout << "Enter the size of an array: ";
//     cin >> n;
//     int arr[100];
//     cout << "Enter the elements of an array: ";
//     for (int i=0; i<n; i++) {
//         cin >> arr[i];
//     }

//     shiftElementsByOne(arr, n);
//     printArray(arr, n);
//     return 0;
// }

// kr liye maine right shidt array ke element ko shifting by 1
// int shiftLeftRight(int arr[], int n) {
//     int start=0;
//     int end = n-1;
//     int temp = arr[0];

//     for(int i=0; i<end; i++) {
//         arr[i] = arr[i+1];
//     }

//     arr[end] = temp;
// }

// int printArray(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     }
// }
// int main() {
//     int n;
//     cout << "Enter the size of an array: ";
//     cin >> n;
//     int arr[100];
//     cout << "Enter the elements of an array: ";
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }

//     shiftLeftRight(arr, n);
//     printArray(arr, n);
//     return 0;
// }

//main ab 2D array intitialize krunga, print krunga rowWise and ColumnWise
// ok?


// int printArray1(int arr[][3], int row, int col) {
//     for(int i=0; i<row; i++) {
//         for(int j=0; i<col; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int printArray2(int arr[][3], int row, int col) {
//     for(int i=0; i<row; i++) {
//         for(int j=0; i<col; j++) {
//             cout << arr[j][i] << " ";
//         }
//         cout << endl;
//     }
// }


// int main() {
//     int arr[3][3];
//     int row=3;
//     int col=3;

//     for(int i=0; i<row; i++) {
//         for (int j=0; j<col; i++) {
//             cout << "Row index = "<<i<<"Coumn index = "<<j<<endl;
//             cin >> arr[i][j];
//         }
//         cout << endl;
//     }

//     cout << "Printing Row wise: ";
//     printArray1(arr, row, col);

//     cout << "Printing Col wise: ";
//     printArray2(arr, row, col);

//     return 0;

// }

// void printArray1(int arr[][4],int row,int col){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// // Print 2D-Array column wise
// void printArray2(int arr[][4],int row,int col){
//     for(int i=0;i<col;i++){
//         for(int j=0;j<row;j++){
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     // initialization of 2D array
//     int arr[3][4]={
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
//     };

//     int row=3;
//     int col=4;
//     cout<<"Printing row wise"<<endl;
//     printArray1(arr,row,col);
//     cout<<"Printing column wise"<<endl;
//     printArray2(arr,row,col);

//     return 0;
// }

//ab mereko linear search krna hai in 2d ARRAY mai
// __DEC32_MANT_DIG__?

// int linearSearch2D(int arr[][3], int row, int col, int target) {
//     bool target_element = false;
//     for(int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             if(arr[i][j]==target) {
//                 target_element = true;
//             }
//         }
//     }

//     return target_element;
// }
// int main() {
//     int arr[3][3] = {
//     {1,2,3},
//     {4,5,6},
//     {7,8,9}};

//     int row = 3;
//     int col = 3;

//     int target;
//     cout << "Enter you target: ";
//     cin >> target;

//     bool flagans = linearSearch2D(arr, row, col, target);
//     if(flagans) {
//         cout << "Element Found!";
//     }
//     else {
//         cout << "Not found!";
//     }

//     return 0;
// }

//suno ab mereko input lena hai 2D matric ke elements
// int printRowWise(int arr[][3], int row, int col) {
//     for(int i=0; i<row; i++) {
//         for(int j=0; j<col; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int printColWise(int arr[][3], int row, int col) {
//     for(int i=0; i<row; i++) {
//         for(int j=0; j<col; j++) {
//             cout << arr[j][i] << " ";
//         }
//         cout << endl;
//     }
// }


// int main() {
//     int arr[3][3];
//     int row=3;
//     int col=3;

//     for(int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             cout << "Row Index: "<<i<<"Col Index: "<<j<<endl;
//             cin >> arr[i][j];
//         }
//         cout << endl;
//     }
//     cout << "Printing Row Wise: "<<endl;
//     printRowWise(arr, row, col);

//     cout << "Printing Column Wise: "<<endl;
//     printColWise(arr, row, col);

//     return 0;
// }

//find Min and Max elements in 2D array
// #include<limits.h>
// int findMax(int arr[][3], int row, int col) {
//     int max_val = INT_MIN;
//     for(int i=0; i<row; i++) {
//         for(int j=0; j<col; j++) {
//             if(arr[i][j]>max_val) {
//                 max_val = arr[i][j];
//             }
//         }
//     }
//     cout << max_val;
// }

// int findMin(int arr[][3], int row, int col) {
//     int min_val = INT_MAX;
//     for(int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             if(arr[i][j]<min_val) {
//                 min_val = arr[i][j];
//             }
//         }
//     }
//     cout << min_val;
// }
// int main() {
//     int arr[3][3];
//     int row = 3;
//     int col = 3;

//     for(int i=0; i<row; i++) {
//         for (int j=0; j<col ;j++) {
//             cin >> arr[i][j];
//         }
//         cout << endl;
//     }

//     findMax(arr, row, col);
//     findMin(arr, row, col);

//     return 0;
// }


// //ab mereko -> RowWise ans ColWise Sum print krna hai 
// int printRowWise(int arr[][3], int row, int col) {
//     int sum = 0;
//     for(int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             sum = sum + arr[i][j];
//         }
//             cout << sum << endl;

//     }
// }

// int printColWise(int arr[][3], int row, int col) {
//     int sum = 0;
//     for(int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             sum = sum + arr[j][i];
//         }
//         cout <<sum << endl;
//     }
// }
// int main() {
//     int arr[3][3] = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };

//     int row = 3;
//     int col = 3;

//     // for(int i=0; i<row; i++) {
//     //     for (int j=0; j<col; j++) {
//     //         cin >> arr[i][j];
//     //     }
//     //     cout << endl;
//     // }
//     cout << "Row wise summation: "<<endl;
//     printRowWise(arr, row, col);
//     cout << "Column wise summation: "<<endl;
//     printColWise(arr, row, col);

//     return 0;
// }

//ab mereko ko diagonal print krna hai principal diagonal bhi or secondary diagonal bhi 
// int printPrincipalDiagonal(int arr[][3], int row, int col) {
//     int sum = 0; 
//     for(int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             if(i==j) {
//                 sum = sum + arr[i][j];
//             }
//         }
//     }
//     cout << sum << endl;
// }

// int printSecondaryDiagonal(int arr[][3], int row, int col) {
//     int sum = 0; 
//     for(int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             if(i+j == (col-1)) {
//                 sum = sum + arr[i][j];
//             }
//         }
//     }
//     cout << sum << endl;
// }

// int main() {
//     int arr[3][3] = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };

//     int row = 3;
//     int col = 3;
//     cout << "Sum of Principal diagonal Elements is: ";
//     printPrincipalDiagonal(arr, row, col);
//     cout << "Sum of Secondary diagonal Elements is: ";
//     printSecondaryDiagonal(arr, row, col);

//     return 0;
// }

// transpose of a matrix
// void printTranspose(int arr[][3], int row, int col) {
//     for(int i=0; i<row; i++) {
//         for(int j=i; j<col; j++) {
//             swap(arr[i][j], arr[j][i]);
//         }
//     }
// }
// int printArray(int arr[][3], int row, int col){
//     for(int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int arr[3][3] = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };

//     int row = 3;
//     int col = 3;

//     printTranspose(arr, row, col);
//     printArray(arr, row, col);
//     return 0;
// }
// void printVector(vector<int> arr6) {
//     int n = arr6.size();
//     for(int i=0; i<n; i++) {
//         cout<<arr6[i]<< " ";
//     }
// }
// int main() {
//     vector<int> arr6 = {1,2,3,4,5,6};
//     printVector(arr6);

//     return 0;
// }

//accessing 2D Vector
// int main() {
//     vector<vector<int>> arr2(5, vector<int> (10,0));
//     int RowSize = arr2.size();
//     int ColSize = arr2[0].size();

//     for(int i=0; i<RowSize; i++) {
//         for (int j=0; j<ColSize; j++) {
//             cout << arr2[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//Jagged arary ->

// int main() {
//     vector<vector<int>> arr;
//     int n = arr.size();
//     // int c = arr[i].size();

//     vector<int> vec1(10,0);
//     vector<int> vec2(5,1);
//     vector<int> vec3(7,0);
//     vector<int> vec4(8,1);
//     vector<int> vec5(20,0);

//     arr.push_back(vec1);
//     arr.push_back(vec2);
//     arr.push_back(vec3);
//     arr.push_back(vec4);
//     arr.push_back(vec5);

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<arr[i].size(); j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//ab mereko -> sum of diagonal element in an array

// void printRowWiseSum(int arr[][3], int row, int col) {
//     int sum =0;
//     for(int i=0; i<row; i++) {
//         for(int j=0; j<col; j++) {
//             if(i==j) {
//                 sum = sum + arr[i][j];
//             }
//         }
//         cout << sum;
//     }
// }

// void printRowWiseSum(int arr[][3], int row, int col) {
//     int sum =0;
//     for(int i=0; i<row; i++) {
//         for(int j=0; j<col; j++) {
//             if((i+j)==(col-1)) {
//                 sum = sum + arr[j][i];
//             }
//         }
//         cout << sum;
//     }
// }
// int main() {
//     int arr[3][3] = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };

//     int row = 3;
//     int col = 3;

//     cout << "Coumn Wise Sum: "<<endl;;
//     printColumWiseSum(arr, row, col);
//     cout << "Row Wise Sum: "<<endl;;
//     printRowWiseSum(arr, row, col);
    
//     return 0;
// }

//Diagonla elemeent ka sum chaiye mereko
// Approach - 1. we will make two functions for Principla Diagonal and Secondary Diagonals
//             2. Then will print sum 

// void printPrincipalDiagonal(int arr[][3], int row, int col) {
//     int sum = 0;
//     for (int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             if(i==j) {
//                 sum = sum + arr[i][j];
//             }
//         }
//     }
//     cout << sum << endl;
// }
// void printSecondaryDiagonal(int arr[][3], int row, int col) {
//     int sum = 0;
//     for (int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             if(i+j==(col-1)) {
//                 sum = sum + arr[j][i];
//             }
//         }
//     }
//     cout << sum << endl;
// }
// int main() {
//     int nums[3][3] = {
//         {1,2,3,},
//         {4,5,6,},
//         {7,8,9}
//     };

//     int row = 3;
//     int col = 3;

//     cout << "Printing sum of Principal Diagonal elements: "<<endl;
//     printPrincipalDiagonal(nums, row, col);

//     cout << "Printing sum of Secondary Diagonal elements: "<<endl;
//     printSecondaryDiagonal(nums, row, col);

//     return 0;
// }

//Print -ve number to left side of an aaray
//1st method id Two Pointer approach
// int printNegativeFirst(int arr[], int n) {
//     int i=0;
//     int j=0;
//     while(i<n) {
//         if(arr[i]>0) {
//             i++;
//         }
//         else {
//             swap(arr[i], arr[j]);
//             i++;
//             j++;
//         }
//     }
// }

// void printArray(int arr[], int n){
//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     }
// }
// int main() {
//     int arr[] = {1,-2, -3, 2, 5};
//     int n = 5;

//     printNegativeFirst(arr, n);
//     printArray(arr, n);
//     return 0;
// }

//Method 2 use krunga 
// int printNegativeFirst(int arr[], int n) {
//     int start = 0;
//     int end = n-1;

//     while(start<end) {
//         if(arr[start]<0) {
//             start++;
//         }

//         else if(arr[end]>0) {
//             end--;
//         }

//         else if( arr[start]>0 && arr[end]<0) {
//             swap(arr[start], arr[end]);
//             start++;
//             end++;
//         }
//     }
// }

// void printArray(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     }
// }
// int main() {
//     int n;
//     cout << "Enter the size of an array: ";
//     cin >> n;
//     int arr[100];
//     cout << "Enter the elements of an array: ";
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }

//     printNegativeFirst(arr, n);
//     printArray(arr, n);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// Function to rotate array
void Rotate(int arr[], int d, int n)
{
	// Storing rotated version of array
	int temp[n];

	// Keeping track of the current index
	// of temp[]
	int k = 0;

	// Storing the n - d elements of
	// array arr[] to the front of temp[]
	for (int i = d; i < n; i++) {
		temp[k] = arr[i];
		k++;
	}

	// Storing the first d elements of array arr[]
	// into temp
	for (int i = 0; i < d; i++) {
		temp[k] = arr[i];
		k++;
	}

	// Copying the elements of temp[] in arr[]
	// to get the final rotated array
	for (int i = 0; i < n; i++) {
		arr[i] = temp[i];
	}
}

// Function to print elements of array
void PrintTheArray(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

// Driver code
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int N = sizeof(arr) / sizeof(arr[0]);
	int d = 2;

	// Function calling
	Rotate(arr, d, N);
	PrintTheArray(arr, N);

	return 0;
}
