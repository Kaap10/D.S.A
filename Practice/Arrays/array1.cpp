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
/* TWO POINTER METHOD
jab start end se chotta ya equals to ho toh swap krte rho aage peehce then start ko aage badhate jao and end ko aage la te hao*/

// #include<iostream>
// using namespace std;

// void reverseArray (int arr[], int size) {
//     int start =0;
//     int end = size-1;

//     while(start<=end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     } 
//     cout << "Reversed Array is: ";
//     for (int i=0; i<size; i++) {
//         cout << arr[i]<<" ";
//     }
// }

// int main() {
//     int arr[100];
//     int size;

//     cout << "enter the size: ";
//     cin >>size;

//     for (int i=0; i<size; i++) {
//         cin >> arr[i];
//     }

//     cout << "Original array is: ";
//     for (int i=0; i<size; i++) {
//         cout <<arr[i]<<" ";
//     }

//     reverseArray(arr, size);
//     return 0;
// }

//# Problem-4 [extreme print and array]
/* 1st element then last element, 2nd element then second last element... continues 
isme cases banega Even case alag and Odd case alag*/

// #include<iostream>
// using namespace std;


// void printExtreme(int arr[], int size) {
//     int start=0;
//     int end = size-1;
//     /* 2 cases for EVEN start or end ko dono ko print krvainge
//     for ODD sirf start ko print krvainge because start or end ki hi jagah aa jainge jab START==END hojayega*/
//     while(start<=end) {
//         if(start==end) {
//             cout << arr[start]<< " ";
//         }
//         else{
//             cout << arr[start]<<" ";
//             cout << arr[end] << " ";
//         }

//         start++;
//         end--;
//     }
// }
// int main() {
//     int arr[100];
//     int size;

//     cout << "enter the size: ";
//     cin >> size;

//     for (int i=0; i<size; i++) {
//         cin >> arr[i];
//     }

//     printExtreme(arr,size);
//     return 0;
// }

// #Find unique element 
// #include<iostream>
// using namespace std;

// void printUniqueElement(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             for (int k=0; k<n; k++) {
//             cout << arr[i]<<", "<<arr[j]<<", "<<arr[k]<<endl;
//             }
//         }
//     }
// }
// int main() {
//     int arr[] = {10,20,30};
//     int n=3;

//     printUniqueElement(arr,n);
//     return 0;
// }

// #Print 0's & 1's 
// #include<iostream>
// using namespace std;
// void printZeroOne(int arr[], int size) {
//     int Countzero=0;
//     int Countone=0;

//     for (int i=0; i<size; i++) {
//         if(arr[i]==0) {
//             Countzero++;
//         }
//         else {
//             Countone++;
//         }
//     }
//     for (int i=0; i<Countone; i++) {
//         arr[i]=0;
//     }
//     for (int i=Countone; i<size; i++) {
//         arr[i]=1;
//     }
//     cout << Countone;
//     cout << Countzero;

// }
// int main() {
//     int arr[100];
//     int size;

//     cout <<"Enter size of an array: ";
//     cin >> size;

//     for (int i=0; i<size; i++) {
//         cin >> arr[i];
//     }

//     printZeroOne(arr, size);
//     return 0;
// }

// #Program - Print 0 & 1 using two pointer approach
#include<iostream>
using namespace std;

void printZeroOne(int arr[], int size) {
    //using two pointer approach
    int start=0;
    int end = size-1;

    while(start<end) {
        while(start<end && arr[start]==0) {
            start++;
        }

        while(start<end && arr[end]==1) {
            end--;
        }

        if(start<end && arr[start]==1 && arr[end]==0) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i=0; i<size; i++) {
        cout << arr[i]<<" ";
    }
}
int main() {
    int arr[100];
    int size=6;

    // cout << "Enter the size: ";
    // cin >> size;

    // for (int i=0; i<size; i++) {
    //     cin >> arr[i];
    // }

    printZeroOne(arr,size);
    printArray(arr,size);

    return 0;
}