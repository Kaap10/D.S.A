#include<iostream>
#include<cstring>
using namespace std;

//program-1 find the length of a string

// int findLength(char ch[], int size) {
//     int length = 0;

//     for (int i=0; i<size; i++) {
//         if(ch[i]=='\0') {
//             break;
//         }

//         else{
//             length++;
//         }
//     }
//     return length;
// }

// int main() {
//     char ch[100];
//     cin >> ch;

//     int length = findLength(ch, 100);
//     cout << length << endl;
//     cout << strlen(ch);

//     return 0;
// }

//reverse a string 

// int getLength(char ch[], int size) {
//     int index = 0;
//     while(ch[index]!=0) {
//         index ++;
//     }
//     return index;
// }

// void reverseString(char ch[], int size) {
//     int start = 0;
//     int end = size-1;
    
//     //temination condition
//     while(start<=end) {
//         swap(ch[start], ch[end]);
//         start++;
//         end--;
//     }
// }

// int main() {
//     char ch[100];
//     cout << "Enter String: ";

//     cin >> ch;
//     int length = getLength(ch, 100);
//     reverseString(ch, length);
//     cout << "Reverse String: "<< ch << endl;

//     return 0;
// }

