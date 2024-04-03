#include <iostream>

void printAllPairs(int arr[], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            std::cout << arr[i] <<" "<<arr[j]<<std::endl;
        }
    }
}

int main(){
    int n= 3;
    int arr[] = {1,2,3};

    printAllPairs(arr, n);
    return 0;
}