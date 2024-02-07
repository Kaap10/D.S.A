#include<iostream>
using namespace std;
//Linear Search
for(int i=0; i<arr.size(); i++) {
    if(arr[i] == target) {
        return true
    }
}
return false;

//Binary search
bool binarySearch(vector<int> arr, int target) {
    int n = arr.size();
    int start = 0;
    int end = n-1;
    int mid = start +(end-start)/2;
    bool ans = false;

    while(start<=end) {
        if(arr[mid] == target) {
            ans = true;
            return ans;
        }

        else if (arr[mid]<target) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

//Find the first occurence of a number in a sorted array
int findFirstOccurence(vector<int> arr, int target) {
    int n = arr.size();
    int start = 0;
    int end = n-1;
    int ans = -1;

    while(start<=end) {
        int mid = start+(end-start)/2;
        if(arr[mid] == target) {
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]<target) {
            start = mid+1;
        }

        else if(arr[mid]>target) {
            end = mid-1;
        }
    }
    return ans;
}

//Last occurence
int findLastOccurence(vector<int> arr, int target) {
    int n = arr.size();
    int start = 0;
    int end = n-1;
    int ans = -1;

    while(start<=end) {
        int mid = start + (end-start)/2;
        if(arr[mid] == target) {
            ans = mid;
            start = mid+1;
        }

        else if(arr[mid] > target) {
            end = mid-1;
        }

        else if(arr[mid] < target) {
            start = mid+1;
        }

        mid = start + (end-start)/2;
    }
    return ans;
}

//Total Occurence (LO - FO + 1)
int findFirstOccurence(vector<int> arr, int target) {
    int n = arr.size();
    int start = 0;
    int end = n-1;
    int ans = -1;

    while(start<=end) {
        if(arr[mid] == target) {
            ans = mid;
            end = mid-1;
        }

        else if(arr[mid]<target) {
            start = mid+1;
        }

        else if(arr[mid] > target) {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOccurence(vector<int> arr, int target){
    int n = arr.size();
    int start= 0;
    int end = n-1;
    int ans = -1;

    while(start<=end) {
        if(arr[i]==target) {
            ans = mid;
            start = mid+1;
        }

        else if(arr[i]>target) {
            start = mid+1;
        }

        else if(arr[i]<target) {
            end = mid-1;
        }

        mid = start + (end-start)/2;
    }
    return ans;
}

int findTotalOccurence(vector<int> arr, int target) {
    int LastIndex = lastOccurence(arr, target);
    int FirstIndex = findFirstOccurence(arr, target);
    int totalOccurence = LastIndex - FirstIndex +1;
    return totalOccurence;
}

//Find missing element in sorted array
int findMissingElement(int arr[], int size) {
    int start = 0;
    int end = size-1;
    int ans = -1;
    int mid = start + (end-start)/2;

    while(start<=end) {
        int difference = arr[mid] - mid;
        if(difference==1) {
            start = mid+1;
        }
        else if(difference==2) {
            ans = mid;
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans+1;
}

//Peak element in a Mountain Array
class Solution{
    public:
    int PeakElement(vector<int> &arr) {
        int n = arr.size();
        int start = 0;
        int end = n-1;

        while(start<=end) {
            int mid = start + (end-start)/2;
            if(arr[mid]>arr[mid+1]) {
                end = mid;
            }

            else if(arr[mid]<arr[mid+1]) {
                start = mid+1;
            }
        }
        return start;
    }
} 

//Find Pivot Element
class Solution{
    public:
    int pivotIndex(vector<int> &nums ) {
        int n = nums.size();
        int rightSum = 0;
        int leftSum = 0;

        for(int i=0; i<n; i++) {
            rightSum = nums[i] + rightSum;
        }

        for(int i=0; i<n; i++) {
            rightSum = RightSum - nums[i];
            if(rightSum == leftSum) {
                return i;
            }
            leftSum = leftSum + nums[i];
        }
        return -1;
    }
}

//Find pivot element index from sorted and rotated array
