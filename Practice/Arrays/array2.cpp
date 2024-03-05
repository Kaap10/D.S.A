#include<iostream>
using namespace std;
//Linear search in an array {1 by 1 check krega element

int main() {
    int arr[] = {2,3,6,8,10,12};
    int n = 6;
    int target = 10;

    bool flag = false;
    for(int i=0; i<n; i++) {
        if(target == arr[i]) {
            flag = true;
            break;
        }
    }

    if(flag==true) {
        cout << "Element found: ";
    }

    else {
        cout << "Element not found: ";
    }

    return 0;
}

//Count 0 and 1 in an array

void countZeroOne(int arr[], int size) {
    int OneCount = 0;
    int ZeroCount = 0;

    for(int i=0; i<size; i++) {
        if(arr[i]==0) {
            ZeroCount++;
        }

        else {
            OneCount++;
        }
    }

    cout << "Zero Count: " << ZeroCount;
    cout << "One Count: " << OneCount;
}
int main() {
    int arr[100];
    int size;

    cout << "Enter the size: ";
    cin >> size;

    cout << "Enter element: ";
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }

    countZeroOne(arr, size);
    return 0;
}

//MAXIMUM AND MINIMUM ELEMENT IN AN ARRAY
void MaximumElement(int arr[], int size) {
    int maxVal = INT_MIN;

    for(int i=0; i<size; i++) {
        if(maxVal < arr[i]) {
            maxVal = arr[i];
        }
    }

    cout << "Maxval is: "<< maxVal;
}

void MinimumElement(int arr[], int size) {
    int minVal = INT_MAX;

    for(int i=0; i<size; i++) {
        if (minVal > arr[i]) {
            minVal = arr[i];
        }
    }
    cout << "Minval is: "<<minVal;
}