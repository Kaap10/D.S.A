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
 
//program 3 (upper case to lower case & lowercase to uppercase)

//Lowercase to Uppercase

// void replaceCharacter(char ch[], int size) {
//     int index= 0;

//     while(ch[index]!='\0') {
//         if(ch[index]=='@') {
//             ch[index] = ' ';
//         }
//         index++;
//     }
// }
// void convertToUppercase(char ch[], int size) {
//     int index = 0;
//     while(ch[index]!='\0') {
//         if(ch[index]>='a' && ch[index]<='z') {
//             ch[index] = ch[index] - 'a' + 'A';
//         }
//         index++;
//     }
// }

// void convertToLowercase(char ch[], int size) {
//     int index = 0;
//     while(ch[index]!='\0') {
//         if(ch[index]>='A' && ch[index]<='Z') {
//             ch[index] = ch[index] - 'A' +'a';
//         }
//         index++;
//     }
// }

// int main() {
//     char ch[100];
//     cin.getline(ch,100);
//     int length = strlen(ch);
//     // convertToLowercase(ch, length);
//     // cout << ch << endl;
//     // convertToUppercase(ch, length);
//     // cout << ch << endl;
//     replaceCharacter(ch, length);
//     cout << ch;

//     return 0;
// }

//PROGRAM-05
//Check Palindrom

bool checkPalinrome(char ch[], int size) {
    int start = 0;
    int end = size-1;

    while(start<=end) {
        if(ch[start]!=ch[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
