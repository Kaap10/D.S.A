#include <iostream>
#include<limits.h>
using namespace std;


//-----> Linear search in an array
// int main() {
//     int n;
//     std::cout << "Enter the array size: ";
//     std::cin >> n;

//     int arr[100];
//     std::cout << "Enter the array Elements: ";
//     for(int i=0; i<n; i++) {
//         std::cin >> arr[i];
//     }

//     int target;
//     std::cout << "Enter target: ";
//     std::cin >> target;
//     bool flag = false;

//     for(int i=0; i<n; i++) {
//         if(target==arr[i]) {
//             flag = true;
//             break;
//         }
//     }

//     if(flag==true) {
//         std::cout << "Element found";
//     }

//     else {
//         std::cout << "Element not found";
//     }

//     return 0;
// }


//----> Count 1s and 0s in an array (modified for other numbers too)
// int main() {
//     int n;
//     std::cout << "Enter the array size: ";
//     std::cin >> n;

//     int arr[100];
//     std::cout << "Enter the array Elements: ";
//     for(int i=0; i<n; i++) {
//         std::cin >> arr[i];
//     }

//     int zeroCount = 0;
//     int oneCount = 0;
//     int extraCount = 0;

//     for(int i=0; i<n; i++) {
//         if(arr[i]==0) {
//             zeroCount++;
//         }

//         else if(arr[i]==1) {
//             oneCount++;
//         }

//         else if(arr[i]!=0 || arr[i]!=1) {
//             extraCount++;
//         }
//     }

//     cout << "Ones count: "<< oneCount<<endl;
//     cout << "Zeroes count: "<<zeroCount<<endl;
//     cout << "Others than 1 and 0: "<< extraCount<<endl;

//     return 0;
// }

//---> Maximum and Minimum elements in an array
// here we will take help of INT_MIN and INT_MAX to compare elements

// void printMaxElement(int arr[], int n) {
//     int max = INT_MIN;
//     for(int i=0; i<n; i++) {
//         if(arr[i]>max) {
//             max = arr[i];
//         }
//     }

//     cout << "Max Element: "<<max <<endl;
// }

// void printMinElement(int arr[], int n) {
//     int min = INT_MAX;
//     for(int i=0; i<n; i++) {
//         if(arr[i]<min) {
//             min = arr[i];
//         }
//     }

//     cout << "Min element: "<<min << endl;
// }
// int main() {
//     int n;
//     cout << "Enter the array size: ";
//     cin >> n;

//     int arr[100];
//     cout << "Enter the array Elements: ";
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }

//     printMaxElement(arr, n);
//     printMinElement(arr, n);

//     return 0;
// }

// ---> Reverse elements in an array

// #include <iostream>
// #include <algorithm>

// void reverseArray(int arr[], int n) {
//     int start = 0;
//     int end = n-1;

//     while(start <= end) {
//         std::swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// void printArray(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         std::cout << arr[i] << " ";
//     }
// }

// int main() {
//     int n;
//     std::cout << "Enter the array size: ";
//     std::cin >> n;

//     int arr[100];
//     std::cout << "Enter the array elements: ";
//     for(int i=0; i<n; i++) {
//         std::cin >> arr[i];
//     }

//     reverseArray(arr, n);
//     printArray(arr, n);

//     return 0;
// }

//---> Print extreme of an array

// void extremeArray(int arr[],int size){
//     int start=0;
//     int end=size-1;

//     while(start<=end){
//         if(start==end){
//             cout<<arr[start]<<" ";
//         }
//         else{
//             cout<<arr[start]<<" ";
//             cout<<arr[end]<<" ";
//         }

//         start++;
//         end--;
//     }
// }

// int main(){
//     int arr[100];
//     int size;

//     // Entering size of array
//     cout<<"Enter size: ";
//     cin>>size; 

//     // Taking input in array
//     cout<<"Enter element: ";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     // Calling method
//     extremeArray(arr,size);
//     return 0;
// }

// --> find unique element

// int getUniqueElement(int arr[], int n) {
//     int ans = 0;
//     for(int i=0; i<n; i++) {
//         ans = ans^arr[i];
//     }
//     return ans;
// }
// int main(){
//     int arr[100];
//     int size;

//     // Entering size of array
//     cout<<"Enter size: ";
//     cin>>size; 

//     // Taking input in array
//     cout<<"Enter element: ";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     // Calling method
//     getUniqueElement(arr,size);
//     return 0;
// }

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

// ---> couting 0s and 1st and print an array

void SortZeroOne(int arr[], int n) {
    int OneCount  = 0;
    int ZeroCount = 0;

    for(int i=0; i<n; i++) {
        if(arr[i] == 0) {
            ZeroCount++;
        }

        else {
            OneCount++;
        }
    }
    for(int i=0; i<ZeroCount; i++) {
        arr[i]=0;
    }

    for(int i=ZeroCount; i<OneCount; i++) {
        arr[i]=1;
    }
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}
int main{
    int n = 5;
    int arr[5] = {1,0,1,0,0,0};

    SortZeroOne(arr, n);
    printArray(arr, n);
    return 0;
}


//Count 0 and 1 and arrange them (using two pointers appraoch)
void sortZeroOne(int arr[], int n) {
    int start = 0;
    int end = n-1;

    while(start<=end) {
        while(start<end && arr[start]=0) {
            start++;
        }

        while(start<end && arr[end]=1) {
            end--;
        }

        if(start<end && arr[start]==1 && arr[end]==0) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}
int main() {
    int n = 6;
    int arr[6] = {1,2,3,4,5,6};

    SortZeroOne(arr, n);
    return 0;
}

//Shift element form right to left (by one)

void ShiftLeftByone(int arr[], int n) {
    int temp = arr[size-1];
    for(int i=n-1; i>1; i--) {
        arr[i] = arr[i-1];
    }

    arr[0] = temp;
}

void ShiftRightByOne(int arr[], int n) {
    int temp =arr[0];

    for(int i=0; i<n; i++) {
        arr[i] = arr[i+1];
    }

    arr[n-1] = temp;
}

//printing array colum wise and row wise
void PrintRowWise(int arr[][4], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
}

void PrintColWise(int arr[][4], int row, int col) {
    for(int i=0; i<col; i++) {
        for(int j=0; j<row; j++) {
            cout << arr[j][i] << endl;
        }
        cout << endl;
    }
}

//find MAX and MIN in 2D array

void findMax(int arr[], int row, int col) {
    int max = INT_MIN;
    for(int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            if(arr[i][j]>max) {
                max = arr[i][j];
            }
        }
    }
    cout << "Maximum element: "<<max<<endl;
}

void findMin(int arr[], int row, int col) {
    int min = INT_MIN;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(arr[i][j]<min) {
                min = min[i][j];
            }
        }
    }
}
int main() {
    int arr[3][3] = 
    {{10,20,30},
    {40,50,60},
    {70,80,90}
    };

    int row=3;
    int col=3;

    findMax(arr, row, col);
    findMin(arr, row, col);
    return 0;
}

//pritn diagonla sum

void RowWise(int arr[][3], int row, int col) {
    for(int i=0; i<row; i++) {
        int sum = 0;
        for(int j=0; j<col; j++) {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}

void ColWise(int arr[][3], int row, int col) {
    for(int i=0; i<col; i++) {
        int sum = 0;
        for(int j=0; j<row; j++) {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}

//print diagonal sum

void diagonalSum(int arr[], int row, int col) {
    int sum =0;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(i==j) {
                sum = sum + arr[i][j];
            }
        }
    }

    cout << sum << endl;
}

void secondaryDiagonalSum(int arr[], int row, int col) {
    int sum=0;

    for(int i=0; i<row; i++ ) {
        for(int j=0; j<col; j++) {
            if(i+j==(col-1)) {
                sum = sum + arr[i][j];
            }
        }
        cout << sum;
    }
}

//Transpose of a matrix
for(int i=0; i<row; i++) {
    for( int j=0; j<col; j++) {
        swap(arr[i][j], arr[j][i]);
    }
}

//BASICS OF STL
vector<int> arr;
int n = arr.size(); //size
arr.push_back(1); // inserting an element
arr.pop_back(1); //deleting an element
vector<int> arr(size, data); //use to intialize the data 
vector<vector<int>> arr; // 2D array

//Moving all negative numbers to the left side of an array
void ShiftNegLeft(int arr[], int n) {
    int i =0;
    int j=0;

    while(i<n) {
        if(arr[i]>0) {
            i++;
        }
        else {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
    }
}

// Sort colors

void sortColors(int arr[], int n) {
    int start = 0; //0
    int index = 0; // checking every element
    int end  = n.size()-1;

    while(index<=end) {
        if(arr[index]==0) {
            swap(arr[index], arr[start]);
            index++;
            start++;
        }

        else if(arr[index]==1) {
            index++;
        }

        else {
            swap(arr[index], arr[end]);
            end--;
        }
    }
}

//rotate array by n 

void rotateArray(vector<int> &nums, int k) {
    int n = nums.size();
    vector<int> ans(n);

    int index = 0;
    while(index<n) {
        int newIndex = (index+k)%n;
        ans[newIndex] = arr[index];
        index++;
    }
    num = ans;
}

// missing number 

void MissingNumber(int arr[], int n) {
    int n = arr.size();
    int sum =0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }

    int totalSum = n*(n+1)/2;
    int missingNumber = totalSum - sum;

    return missingNumber;
}

//Row with Maximum ones
vector<int> rowMaximumOnes(vector<vector<int>>&mat) {
    int row = mat.size();
    int col = mat[0].size();

    int rowNo = -1;
    int oneCount = INT_MIN;

    for(int i=0; i<row; i++) {
        int count = 0;
        for(int j=0; j<col; j++) {
            if(mat[row][col]==1) {
                count++;
            }
        }

        if(count > oneCount) {
            oneCount = count;
            rowNo = i;
        }
    }

    ans.push_back(rowNo);
    ans.push_back(oneCount);
    return ans;
}

//rotate image by 90deg
void rotateImage(vector<vector<int>>& mat) {
    int row = mat.size();
    int col = mat[0].size();

    //transpose
    for(int i=0; i<row; i++) {
        for(int j=i; j<col; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }

    for(int i=0; i<row; i++) {
        reverse(mat[i].begin(), mat[i].end());
    }
}

//without using reverse function

class Solution{

    void reverseVector(vector<int>& arr) {
        int size = arr.size();
        int start = 0;
        int end = size-1;

        while(start<=end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    void rotateImage(vector<vector<int>> &mat) {
        int row = mat.size();
        int n = mat.size();

        int col = mat[0].size();

        //transpose 
        for(int i=0; i<row; i++) {
            for(int j=i`; j<col; j++) {
                swap(mat[i][j], mat[j][i])
            }
        }

        for(int i=0; i<n; i++) {
            reverseVector(mat[i]);
        }
    }
};