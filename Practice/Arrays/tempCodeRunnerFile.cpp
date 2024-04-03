#include <iostream>
#include <algorithm>

void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n-1;

    while(start <= end) {
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    int n;
    std::cout << "Enter the array size: ";
    std::cin >> n;

    int arr[100];
    std::cout << "Enter the array elements: ";
    for(int i=0; i<n; i++) {
        std::cin >> arr[i];
    }

    reverseArray(arr, n);
    printArray(arr, n);

    return 0;
}
