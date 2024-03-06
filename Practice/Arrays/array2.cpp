#include<iostream>
using namespace std;
''
void linearSearch(int arr[], int size, int target) {
    bool flag = true;

    for(int i=0; i<size; i++) {
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
}

int main() {
    int size;
    cout << "Enter the size: ";
    cin >> size;

    cout << "Enter array elements: ";
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }

    cout << "Enter target element: ";
    cin >> target;

    linearSearch(arr, size, target);
    return 0;
}

//Program: Count 0's & 1's in ar array

void countZero_One(int arr[], int size) {
    int totalZeroCount = 0;
    int totalOneCount = 0;

    for(int i=0; i<size; i++) {
        if(arr[i]==0) {
            totalZeroCount++;
        }
        else {
            totalOneCount++;
        }
    }

    cout << "Enter the total count of zero: "<< totalZeroCount;
    cout << "Enter the total count of One: "<< totalOneCount;
}
int main() {
    int size;
    cout << "Enter the size: ";
    cin >> size;

    cout << "Enter the array elements: ";
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }

    countZero_One(array, size);
    return 0;
}

//find the maximum and minimum element in an array

void MaximumElement(int arr[], int size) {
    int MaxVal = INT_MIN;
    for(int i=0; i<size; i++) {
        if(MaxVal < arr[i]) {
            MaxVal = arr[i];
        }
    }
    cout << "Maximum Element: "<<MaxVal;

}

void MinimumElement(int arr[], int size) {
    int MinVal = INT_MAX;
    for(int i=0; i<size; i++) {
        if(MinVal > arr[i]) {
            MinVal = arr[i];
        }
    }
    cout << "Minimum Element: "<<MinVal;
}

int main() {
    int size;
    count << "Enter the size: ";
    cin >> size;

    int arr[100];
    cout << "Enter the size of an array: ";
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }

    MaximumElement(arr, size);
    MinimumElement(arr, size);
    return 0;

}

//Reverse an array (using two pointers approach)
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size-1;

    while(start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[100];
    int size;

    cout << "Enter size: ";
    cin >> size;

    cout << "Enter the elements of an array: ";
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, size);
    printArray(arr, size);
    return 0;
}

//extreme print of an array (two pointers approach) 
printExtremeArray(int arr[], int size) {
    int start=0;
    int end = size-1;

    while(start<=end) {
        if(start==end) {
            cout << arr[start] << " ";
        }

        else {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }

        start++;
        end--;
    }
}
int main() {
    int arr[100];
    cout << "Enter the size: ";
    cin >> size;
    cout << "Enter the elements:";
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }

    printExtremeArray(arr, size);
    return 0;
}

//Shift array elements (right -> left)

void shiftArray(int arr[], int size) {
    int temp = arr[size-1];
    for(int i=size-1; i>=1; i--) {
        arr[i] = arr[i-1];
    }

    arr[0] = temp;
}

printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}
int main() {
    int arr[100];
    int size;
    cout << "Enter the size: ";
    cin >> size;
    cout << "Enter the elements of an array: ";
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }

    shiftArray(arr, size);
    printArray(arr, size);
    return 0;
}

void shiftLeftArray(int arr[], int size) {
    int temp = arr[0];

    for(int i=0; i<size-1; i++) {
        arr[i] = arr[i+1];
    }

    arr[size-1] = temp;
}

//find unique element

void printUniqueElement(int arr[], int size) {
    int ans = 0;
    for(int i=0; i<size; i++) {
        ans = ans^arr[i];
    }
    return ans;
}
int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[100];
    cout << "Enter the array elements: ";
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }

    printUniqueElement(arr, size);
    return 0;
}

//print all pairs 
void printAllPairs(int arr[], int size) {
    for(int i=0; i<size; i++) {
        for(int j=0; i<size; j++) {
            cout << arr[i] << ", " << arr[j]<< endl;
        }
    }
}
int main() {
    int size;
    int target;

    printAllPairs(arr, size);
    return 0;
}

//sort 1s and 0s in an array
void SortZeroOne(int arr[], int size) {
    int start=0;
    int end=size-1;

    while(s<e) {
        while(arr[start]==0) {
            start++;
        }

        while(arr[end]==1) {
            end--;
        }

        while(arr[start]==1 && arr[end]==0) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}
int i=0;
for(int i=0; i<zeroCount; i++) {
    arr[i]=0;
}

for(int i=zeroCount; i<size;i++) {
    arr[i]=0;
}

int i=0;
while( zeroCount--) {
    arr[i]==0;
    i++:
}

while(oneCount--) {
    arr[i]==1;
    i++;
}