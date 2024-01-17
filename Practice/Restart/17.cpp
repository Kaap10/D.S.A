#include<iostream>
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

