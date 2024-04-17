#include<iostream>
using namespace std;

void sortArray(vector<int> &arr, int n) {
    int count_zero = 0;
    int count_One = 0;
    int count_Two = 0;

    for(int i=0; i<arr.size(); i++) {
        if(arr[i]==0) {
            count_zero++;
        }

        else if(arr[i]==1) {
            count_One++;
        }

        else {
            count_Two++;
        }
    }

    for(int i=0; i<count_zero; i++) {
        arr[i]=0;
    }

    for(int i=count_zero; i<count_One; i++) {
        arr[i]=1;
    }

    for(int i=count_One; i<count_Two; i++) {
        arr[i]=2;
    }
}