#include<iostream>
#include<vector>
using namespace std;

// bool binarySearch(vector<int> arr, int target) {
//     int n = arr.size();
//     int start = 0;
//     int end = n - 1;

//     int mid = start + ((end-start)/2);
//     bool ans = false;

//     while(start<=end) {
//         if(arr[mid] == target) {
//             ans = true;
//             return true;
//         }

//         else if (arr[mid] < target) {
//             start = mid +1;
//         }

//         else if(arr[mid] > target) {
//             end = mid-1;
//         }

//         //updating mid
//         mid = start + ((end - start)/2);
//     }
//     return ans;
// }

// //time complexity of BS : O(logN)


// First Occurence
// int findFirstOccurence(vector<int> arr, int target) {
//     int n = arr.size();
//     int start = 0;
//     int end = n-1;
//     int ans = -1; //kuch bhi value de skte hain, agar kuch ans nhi mila toh -1 output aajauega

//     int mid = start + ((end-start)/2);
//     while(start<=end) {
//         if(arr[mid] = target) {
//             ans = mid;
//             end = mid-1;
//         }

//         else if(arr[mid] < target) {
//             start = mid+1;
//         }

//         else if(arr[mid] > target) {
//             end = mid -1;
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<int> arr = {1,2,3,3,3,4};

//     int target = 3;
//     findFirstOccurence(arr, target);
//     return 0;
// }

//find the last occurence in an given array

// int findLastOccurence(vector<int> arr, int target) {
//     int n= arr.size();
//     int start = 0;
//     int end = n-1;
//     int ans = -1;

//     while(start<=end) {
//         int mid = start + (end-start)/2;

//         if(arr[mid] == target) {
//             ans = mid;
//             start = mid + 1;
//         }

//         else if(arr[mid] < target) {
//             start = mid+1;
//         }

//         else if(arr[mid] > target) {
//             end = mid - 1;
//         }
//     }
//     return ans;
// }

// int main() {

//     vector<int> arr = {1,2,3,3,3,4};
//     int target = 3;
//     int finalAns = findLastOccurence(arr, target);
//     cout << finalAns;
//     // return 0;
// }

// int findLastOccurence(vector<int> arr,int target){
//     int n=arr.size();
//     int start=0;
//     int end=n-1;
//     int ans=-1;

//     while(start<=end){

//         int mid=start+((end-start)/2);

//         // Rule 01: When target is equal to mid of array then store possible index in ans and skip the left part
//         if(arr[mid]==target){
//             ans=mid;
//             start=mid+1;
//         }
//         // Rule 02: When target is greater than mid of array value then skip the left part
//         else if(arr[mid]<target){
//             start=mid+1;
//         }
//         // Rule 03: When target is less than mid of array value the skip the right part
//         else if(arr[mid]>target){
//             end=mid-1;
//         }
//     }
//     // When first occurence of a number is found then return ans=index otherwise ans=-1
//     return ans;
// }

// // First occurrence
// int findFirstOccurence(vector<int> arr,int target){
//     int n=arr.size();
//     int start=0;
//     int end=n-1;
//     int ans=-1;

//     while(start<=end){

//         int mid=start+((end-start)/2);

//         // Rule 01: When target is equal to mid of array then store possible index in ans and skip the right part
//         if(arr[mid]==target){
//             ans=mid;
//             end=mid-1;
//         }
//         // Rule 02: When target is greater than mid of array value then skip the left part
//         else if(arr[mid]<target){
//             start=mid+1;
//         }
//         // Rule 03: When target is less than mid of array value the skip the right part
//         else if(arr[mid]>target){
//             end=mid-1;
//         }
//     }
//     // When first occurence of a number is found then return ans=index otherwise ans=-1
//     return ans;
// }

// // First occurrence
// int findTotalOccurence(vector<int> arr,int target){
//     int lastIndex=findLastOccurence(arr,target);
//     int firstIndex=findFirstOccurence(arr,target);
//     int totalOccurrence=lastIndex-firstIndex+1;
//     return totalOccurrence;
// }

// int main(){
//     vector<int> arr{10,20,30,30,30,30,40,50};
//     int target=30;

//     int finalAns = findTotalOccurence(arr,target);
//     cout<<"Total occurence of target is "<<finalAns;
  
// }

// FIND TOTAL OCCURENCE { lastOccurence - firstOccurence + 1}
int firstOccurence(vector<int> arr, int target) {

}

int lastOccurence(vector<int> arr, int target) {
    int n = arr.size();
    int start = 0;
    int end = n-1;

    while(start<=end) {
        int mid = start + (end-start)/2;

        if(arr[mid]==target) {
            ans = mid;
            start = mid +1;
        }

        else if(arr[mid] > target) {
            end = mid-1;
        }

        else if(arr[mid] < target) {
            start = mid +1;
    }
}

int findTotalOccurence(vector<int> arr, int target) {
    int lastIndex = lastOccurence(arr, target);
    int firstIndex = firstOccurence(arr, target);
    int totalOccurence = lastIndex - firstIndex +1;
    return totalOccurence;
}
int main() {
    vector<int> arr{1,2,2,2,2,3,4};
    int target = 2;

    int finalAns = findTotalOccurence(arr, target);
    cout << finalAns;
    return 0;
}