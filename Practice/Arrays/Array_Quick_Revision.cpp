#include <iostream>
#include<limits.h>
using namespace std;


//-----> Linear search in an array
// int main() {
//     int n;
//     std::cout << "Enter the array size: ";
//     std::cin >> n;

//     int arr[100];
//     std::cout << "Enter the array Elements: ";
//     for(int i=0; i<n; i++) {
//         std::cin >> arr[i];
//     }

//     int target;
//     std::cout << "Enter target: ";
//     std::cin >> target;
//     bool flag = false;

//     for(int i=0; i<n; i++) {
//         if(target==arr[i]) {
//             flag = true;
//             break;
//         }
//     }

//     if(flag==true) {
//         std::cout << "Element found";
//     }

//     else {
//         std::cout << "Element not found";
//     }

//     return 0;
// }


//----> Count 1s and 0s in an array (modified for other numbers too)
// int main() {
//     int n;
//     std::cout << "Enter the array size: ";
//     std::cin >> n;

//     int arr[100];
//     std::cout << "Enter the array Elements: ";
//     for(int i=0; i<n; i++) {
//         std::cin >> arr[i];
//     }

//     int zeroCount = 0;
//     int oneCount = 0;
//     int extraCount = 0;

//     for(int i=0; i<n; i++) {
//         if(arr[i]==0) {
//             zeroCount++;
//         }

//         else if(arr[i]==1) {
//             oneCount++;
//         }

//         else if(arr[i]!=0 || arr[i]!=1) {
//             extraCount++;
//         }
//     }

//     cout << "Ones count: "<< oneCount<<endl;
//     cout << "Zeroes count: "<<zeroCount<<endl;
//     cout << "Others than 1 and 0: "<< extraCount<<endl;

//     return 0;
// }

//---> Maximum and Minimum elements in an array
// here we will take help of INT_MIN and INT_MAX to compare elements

// void printMaxElement(int arr[], int n) {
//     int max = INT_MIN;
//     for(int i=0; i<n; i++) {
//         if(arr[i]>max) {
//             max = arr[i];
//         }
//     }

//     cout << "Max Element: "<<max <<endl;
// }

// void printMinElement(int arr[], int n) {
//     int min = INT_MAX;
//     for(int i=0; i<n; i++) {
//         if(arr[i]<min) {
//             min = arr[i];
//         }
//     }

//     cout << "Min element: "<<min << endl;
// }
// int main() {
//     int n;
//     cout << "Enter the array size: ";
//     cin >> n;

//     int arr[100];
//     cout << "Enter the array Elements: ";
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }

//     printMaxElement(arr, n);
//     printMinElement(arr, n);

//     return 0;
// }

// ---> Reverse elements in an array

// #include <iostream>
// #include <algorithm>

// void reverseArray(int arr[], int n) {
//     int start = 0;
//     int end = n-1;

//     while(start <= end) {
//         std::swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// void printArray(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         std::cout << arr[i] << " ";
//     }
// }

// int main() {
//     int n;
//     std::cout << "Enter the array size: ";
//     std::cin >> n;

//     int arr[100];
//     std::cout << "Enter the array elements: ";
//     for(int i=0; i<n; i++) {
//         std::cin >> arr[i];
//     }

//     reverseArray(arr, n);
//     printArray(arr, n);

//     return 0;
// }

//---> Print extreme of an array


void extremeArray(int arr[],int size){
    int start=0;
    int end=size-1;

    while(start<=end){
        if(start==end){
            cout<<arr[start]<<" ";
        }
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }

        start++;
        end--;
    }
}

int main(){
    int arr[100];
    int size;

    // Entering size of array
    cout<<"Enter size: ";
    cin>>size; 

    // Taking input in array
    cout<<"Enter element: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    // Calling method
    extremeArray(arr,size);
    return 0;
}

int 