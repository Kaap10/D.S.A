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

//Column wise sum print
void printColWise(int arr[][col], int row, int col) {
    for(int i=0; i<row; i++) {
        int sum = 0;
        for(int j=0; j<col; j++) {
            sum = sum+arr[i][j];
        }
        cout << sum << endl;
    }
}
int main() {
    int arr[row][col];
    cout << "Enter row: ";
    cin >> row;

    cout << "Enter col: ";
    cin >> col;

    cout << "Enter the array elemnts: ";
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "Printing sum column wise: ";
    printColWise(arr, row, col);
    return 0;
}

//Longest common prefix
class Solution{
public:
    string longestCommonPrefix(vector<string> &strs) {
        //mereko longest common prefix 
        //agar koi prefix na mile toh return ""

        string ans = "";
        int n = strs.size();
        sort(strs.begin(), strs.end());

        int first = strs[0];
        int second = strs[n-1];

        for(int i=0; i<min(first.size(), second.size()); i++) {
            if(first[i]==second[i]) {
                return ans;
            }

            ans = ans + first[i];
        }
        return ans;
    }
}

//running sum of 1D array
class Solution{
public:
    vector<int> runningSum(vector<int> &nums) {
        int n = nums.size();
        for(int i=1; i<n; i++) {
            nums[i] = nums[i-1] + nums[i];
        }
        return nums;
    }
}

//remove nth node from end of list 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;

        for(int i=1; i<n; i++) {
            fast = fast -> next;
        }

        if(fast == NULL) {
            return head->next;
        }

        while(fast && fast->next) {
            slow = slow -> next;
            fast = fast -> next;
        }

        ListNode* temp = slow -> next;
        slow -> next = slow -> next -> next;
        delete(temp);
        return head;
    }
};

//rerarrange element by sign
class Solution{
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(size, 0);

        int PosIndex = 0;
        int NegIndex = 1;

        for(int index=0; index<size; index++) {
            if(nums[index]>0) {
                ans[PosIndex] = nums[index];
                PosIndex = PosIndex + 2;
            }

            else if (nums[index]<0) {
                ans[NegIndex] = nums[index];
                NegIndex = NegIndex + 2;
            }
        }
        return ans;
    }
}

//missing number
class Solution {
public:
    int missingTerm(vector<int> &nums) {
        int n= nums.size();
        int sum = 0;

        for(int i=0; i<n; i++) {
            sum = sum + nums[i];
        }

        int totalSum = (n*(n+1)/2);
        int missingTerm = totalSum - sum;
        return missingTerm;
    }
}


int main() {
    int firstNum, SecondNum;

    cout << "Enter the first number: ";
    cin >> firstNum;

    cout << "Enter the second number: ";
    cin >> SecondNum;

    int sum;
    sum = firstNum + SecondNum;
    cout << "Sum is: "<<firstNum<<" and " <<SecondNum << " is: " << sum;
    return 0;
}