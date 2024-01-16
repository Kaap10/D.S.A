#include<iostream>
using namespace std;

//mereko linear search implement krna hai using array
// int main() {
//     int arr[100] = {1,3,5,6,7,8,21};
//     int n = 10;
//     int target_element = 21;
//     bool target = false;

//     for(int i=0; i<n; i++) {
//         if(target_element == arr[i]) {
//             target = true;
//             break;
//         }
//         else {
//            target = false;
//         }
//     }

//     if(target == true) {
//         cout << "Element Found";
//     }
//     else {
//         cout << "Not Found";
//     }
//     return 0;
// }

//mere ko 0 and 1 count krna hai array mai 
// kaise krenge
//array ke element ko itereate krunga one by one dekhunga ki arr[i]==0 hai ya arr[i]==1 hoga toh OneCount ko ++ krdunga ya toh ZeroCount ko ++ krdunga
// bs itna hi krna hai 

//ab mereko function bana hai jisse count kr sakun ki kitna zero and one hai array mai

// void CountZeroOne(int arr[], int n) {
//     int OneCount = 0;
//     int ZeroCount = 0;

//     for (int i=0; i<n; i++) {
//         if(arr[i]==1) {
//             OneCount++;
//         }

//         else if(arr[i]==0) {
//             ZeroCount++;
//         }
//     }

//     cout << "Zero's in an Array is: "<<ZeroCount<<endl;
//     cout<< "One's in an Array is: "<<OneCount<<endl;
// }
// int main() {
//     //ek array honi chaiye pehle toh ya toh mai inpute lelunga ya pehle se hi dedunga
//     int arr[100];
//     int n;
//     cout << "Enter the total no of elements in an Array: ";
//     cin >> n;

//     cout << "Enter the Array Elements: ";
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }

//     //fucntion ko call krdeta hun
//     CountZeroOne(arr, n);
//     return 0;

// }

//aise mai array mao zero or one count kr skta hun hehhee


//-> Ab mereko "Maximum and Minimum element chaiye in an Array "
// mereko ko kuch aisa chaiye jiss mai compare kra skaun ki yeh isse bda hai ya isse chotta like that i want 
// toh -> mere pass <limits.h> ke header file hai jo mereko INT_MAX & INT_MIN name ke fucntion degi

// #include<limits.h>


// int printMaxElement(int arr[], int n) {
//     int maxElement = INT_MIN;

//     for (int i=0; i<n; i++) {
//         if(maxElement<arr[i]) {
//             maxElement=arr[i];
//         }
//     }

//     cout << "Max Element is: " << maxElement <<endl;
// }

// int printMinElement(int arr[], int n) {
//     int minElement = INT_MAX;

//     for (int i=0; i<n; i++) {
//         if(minElement>arr[i]) {
//             minElement = arr[i];
//         }
//     }
//     cout << "Minimum Element= "<<minElement<<endl;
// }
// int main() {
//     int arr[100];
//     int n;

//     cout<< "Enter the size: ";
//     cin >> n;

//     cout << "Enter the Elements in an array: ";
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }

//     printMaxElement(arr, n);
//     printMinElement(arr,n );
//     return 0;
// }

//dekho aise hi nikal liya maine min and max element in array using two fucntions 

//Reverse an array ke liye mereko -> two pointer approach se krunga thik hai


// int reverseArray(int arr[], int n) {
//     int start = 0;
//     int end = n-1;
//     while(start<=end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// int printArray(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         // cout << "Reversed Array is: ";
//         cout << arr[i]<< " ";
//     }
// }


// int main() {
//     int arr[100];
//     int n;
//     cout << "Enter the size of an array: ";
//     cin >> n;

//     cout << "Enter the element in an array: ";
//     for (int i=0; i<n; i++) {
//         cin >> arr[i];
//     }

//     reverseArray(arr, n);
//     cout << "Reversed Array is: ";
//     printArray(arr, n);
//     return 0;
// }


// -> Now print Extreme elememts in an array means start then end then start+1 then end-1 then start+2 then end-2 like that I want to printf
// int ExtremeArray(int arr[], int n) {
//     int start =0;
//     int end = n-1;

//     while(start<=end) {
//         if(start==end) {
//             cout << arr[start] << " ";
//         }

//         else {
//             cout << arr[start] << " ";
//             cout << arr[end] << " ";
//         }

//         start++;
//         end--;
//     }
// }

// // int printArray(int arr[], int n) {
// //     for (int i=0; i<n; i++) {
// //         // cout << arr[i] << " ";
// //     }
// // }

// int main() {
//     int n;
//     int arr[100];

//     cout << "Enter the size of an array: ";
//     cin >> n;

//     cout << "Enter the Elements in a Array: ";
//     for (int i=0; i<n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Extreme Array is: ";
//     ExtremeArray(arr, n);
//     // printArray(arr, n);

//     return 0;
// }

//mereko ab unique element chaiye arrray mai
//jo ki XOR se nikal skte hain, same number ka xor = 0 hota hai like A^A=0, A^B=1
// int printUniqueElement(int arr[], int n) {
//     int ans = 0;
//     for(int i=0; i<n; i++) {
//         // int ans=0;
//         ans = ans ^ arr[i];
//         // cout << ans;
//     }
//     // cout << ans;
//     return ans;
// }

// int main() {
//     int n;
//     int arr[100];

//     cout << "Enter the size of an array: ";
//     cin >> n;

//     cout << "Enter the elements of a array: ";
//     for (int i=0; i<n; i++) {
//         cin >> arr[i];
//     }

//     int finalans = printUniqueElement(arr, n);
//     cout << finalans;
//     return 0;
// }

// Now I have print all pairs of elements that are present in an array
void PrintAllPairs(int arr[],int size){

    // outer loop
    for(int i=0;i<size;i++){
        // inner loop
        for(int j=0;j<size;j++){
            cout<<arr[i]<<", "<<arr[j]<<endl;
        }
    }
}

int main(){
    int arr[]={10,20,30};
    int n=3;

    // calling method
    PrintAllPairs(arr,n);

    return 0;
}