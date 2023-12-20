// #include<iostream>
// using namespace std;

//Program-1 [Count 0 and 1 in an Array]
// Time Complexity: O(n)
// Space Complexity: O(1)
//Array ke elements ko bari bari dekhenge then 0 aaya toh count 0 ko badhainge ///ly with 1
// void countZeroOne(int arr[], int size){
//     int ZeroCount =0;
//     int OneCount =0;

//     for (int i=0; i<size; i++) {
//         if(arr[i]==0) {
//             ZeroCount++;
//         }
//         else {
//             OneCount++;
//         }
//     }
//     cout << "Zero Count is: "<<ZeroCount<<endl;
//     cout << "One Count is: "<<OneCount<<endl;
// }

// int main() {
//     int arr[100];
//     int size;
//     cout << "the size of the array is: ";
//     cin>> size;

//     for (int i=0; i<size; i++) {
//         cin >> arr[i];
//     }

//     countZeroOne(arr,size);
//     return 0;
// }

//Program-2 [Maximum and Minimum in an Array]
// /*limits.h ki header file lagainge jiisse INT_MAX and INT_MIN define kar payenge/*
// Time Complexity: O(n)
// Space Complexity: O(1)*/
// /* Element ko Compate krvainge INT_MAX & INT_MIN se minVal ko INT_MAX rakhenge and minMax ko INT_Min, element minVal se chota hua toh minVal hojayega similliarly wiht minMax*/

// #include<iostream>
// #include<limits.h>
// using namespace std;

// void findMinMax(int arr[], int size) {
//     int minVal = INT_MAX;
//     int maxVal = INT_MIN;

//     for (int i=1; i<size; i++) {
//         if(arr[i]<minVal) {
//             minVal = arr[i];
//         }   
//         else {
//             maxVal = arr[i];
//         }
//      }
//      cout << "Minimum Value is: "<<minVal<<endl;
//      cout << "Maximum Value is: "<<maxVal<<endl;
// }


// int main() {
//     int arr[100];
//     int size;

//     cout << "Enter the size: ";
//     cin >> size;

//     for (int i=0; i<size; i++) {
//         cin >> arr[i];
//     }

//     findMinMax(arr, size);
//     return 0;
// }

// #Program-3 [Reverse an Array]
// Time Complexity: O(n)
// Space Complexity: O(1)
/* TWO POINTER METHOD*/

#include<iostream>
using namespace std;

void reverseArray (int arr[], int size) {
    int start =0;
    int end = size-1;

    while(start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    } 
    cout << "Reversed Array is: ";
    for (int i=0; i<size; i++) {
        cout << arr[i]<<" ";
    }
}

int main() {
    int arr[100];
    int size;

    cout << "enter the size: ";
    cin >>size;

    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }

    cout << "Original array is: ";
    for (int i=0; i<size; i++) {
        cout <<arr[i]<<" ";
    }

    reverseArray(arr, size);
    return 0;
}
