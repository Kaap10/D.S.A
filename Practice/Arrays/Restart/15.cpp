// mereko GCD and HCF nikalna hai

#include <iostream>
#include <math.h>
using namespace std;

// int main() {
//     int n1, n2, hcf;
//     cout << "Enter 1st number: ";
//     cin >> n1;

//     cout << "Enter 2nd number: ";
//     cin >> n2;

//     //corner case fas rha hai ki what if (n2 > n1)
//     if(n2>n1) {
//         int temp;
//         temp = n2;
//         n2 = n1;
//         n1 = temp; //isse mereko n1 bda mil jayega
//     }
//     for (int i=1; i<=n2; i++) {
//         if(n1 % i == 0 && n2 % i == 0) {
//             hcf = i;
//         }
//     }
//     cout << "Hcf of "<<n1<<" & "<<n2<<" is: "<<hcf;
//     return 0;
// }

// while loop se bhi kr skte hain > bdiya hai
//  int main() {
//      int c1,c2;
//      cout << "Enter two numbers: ";
//      cin >> c1 >> c2;

//     while(c1!=c2) {
//         if(c1 > c2) {
//             c1 = c1 - c2;
//         }
//         else {
//             c2 = c2 - c1;
//         }
//     }
//     cout << c1;
//     return 0;
// }

// //mereko LCM nikalna hai
// thik hai? manlo a and b toh a or b mai max number dhudke MAX mai store krunga then condition laguanga ki (a%i==0 && b%i==0) it gives MAX but if conditon fails then MAX++ krte rho using DO WHILE Loop
// int main() {
//     int n1, n2, MAX;
//     cout << "Enter two numbers: ";
//     cin >> n1 >> n2;

//     MAX = (n1>n2) ? n1:n2;
//     do {
//         if(MAX%n1==0 && MAX%n2==0) {
//             cout << MAX;
//             break;
//         }
//         else {
//             MAX++;
//         }
//     }
//     while (true);
//     return 0;
// }

// Reverse a number
//  int main() {
//      int n, rev_num, remainder;
//      rev_num = 0;

//     cout << "Enter an integer: ";
//     cin >> n;

//         while(n!=0) {
//             remainder = n%10; //remiander aayega
//             rev_num = rev_num * 10 + remainder; //rev numbe aayega
//             n = n/10; //ek digit kam hojaye ana ka
//         }

//         cout << rev_num;
//         return 0;
// }

// power nikalna hai mereko without using pow function
//  int main() {
//      int base, exponent;
//      int result = 1;

//     cout << "Enter Base and Exponent: ";
//     cin >> base >> exponent;

//     // while(exponent!= 0) {
//     //     result = result * base;
//     //     exponent --;
//     // }

//     result = pow(base, exponent);
//     cout << result;
//     return 0;
// }

// Palindromw of a number
// int main()
// {
//     int n, r, sum = 0, temp;
//     cout << "Enter the Number=";
//     cin >> n;
//     temp = n;
//     while (n > 0)
//     {
//         r = n % 10;
//         sum = (sum * 10) + r;
//         n = n / 10;
//     }
//     if (temp == sum)
//         cout << "Number is Palindrome.";
//     else
//         cout << "Number is not Palindrome.";
//     return 0;
// }

//mereko prime num print krna hai between two numbers
// int main() {
//     int low, high, i;
//     bool is_prime = true;

//     cout << "Enter the two numbers: ";
//     cin >> low >> high;

//     while(low<=high) {
//         is_prime = true;

//         if(low==0 || low==1) {
//             is_prime = false;
//         }

//         for(int i=0; i<=low/2; i++) {
//             if(low%i==0) {
//                 is_prime = false;   
//                 break;
//             }
//         }

//         if(is_prime) 
//         cout << low << " ";
//         low ++;
//     }
//     return 0;
// }

//mereko armstrong nikalna hai ok?
// 153 = 1 cube + 5 cube + 3 cube krke = 153 ke qual aana chaiye 

// int main() {
//     int n, orgNum, rem, result;
//     result = 0;

//     cout << "Enter the number: ";
//     cin >> n;

//     orgNum = n;

//     while(orgNum!=0) {
//         rem = orgNum%10;
//         result = result + (rem*rem*rem);
//         orgNum = orgNum/10;
//     }
//     if(result == n) {
//         cout << "Num is Armstrong";
//     }
//     else {
//         cout << "Num is not armstront";
//     }

//     return 0;
// }

//factors chaiye mereko kisi number ka
// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     for (int i=1; i<=n; i++) {
//         if(n%i==0) {
//             cout << i << ", ";
//         }
//     }
//     return 0;
// }

//calculator using switch case
// int main() {
//     int num1, num2;
//     char Op;

//     cout << "Enter Num1: ";
//     cin >> num1;

//     cout << "Enter Num2: ";
//     cin >> num2;

//     cout << "Enter the operation to be performed: ";
//     cin >> Op;

//     switch(Op) {
//         case '+':
//         cout << num1 << " + "<<num2<<" = "<<num1+num2;
//         break;

//         case '-':
//         cout << num1 << " - "<<num2<<" = "<<num1-num2;
//         break;

//         case '*':
//         cout << num1 << " * "<<num2<<" = "<<num1*num2;
//         break;

//         case '/':
//         cout << num1 << " / "<<num2<<" = "<<num1/num2;
//         break;

//         default:
//         cout << "Error Operator!";
//         break;
//     }

//     return 0;
// }

//Prime number between two intervals using function

// int check_prime(int n) {
//     bool is_prime = true;

//     if(n==0 || n==1) {
//         is_prime = false;
//     }
//     for(int j=2; j<=n/2; j++ ) {
//         if(n%j==0) {
//             is_prime = false;
//             break;  
//         }
//     }
//     return is_prime;
// }
// int main() {
//     int n1, n2;
//     cout << "Enter n1 and n2: ";
//     cin >> n1 >> n2;

//     if(n1>n2) {
//         n2 = n1 + n2;
//         n1 = n2 - n1;
//         n2 = n2 - n1;
//     }

//     for(int i=n1+1; i<n2; i++) {
//         bool flag = check_prime(i);

//         if(flag) {
//             cout << i << " ,";
//         }
//     }
//     return 0;
// }

// bool check_prime(int n) {
//     int i;
//     bool is_prime = true;

//     if(n==0 || n==1) {
//         is_prime  = false;
//     }

//     for(i=2; i<=n/2; i++) {
//         if(n%i==0) {
//             is_prime = false;
//             break;
//         }
//     }
//     return is_prime;
// }

// int main() {
//     int n, i;
//     bool flag = false;

//     cout << "Enter a positive integer: ";
//     cin >> n;

//     for(int i=2; i<= n/2; i++) {
//         if(check_prime(i)) {
//             if(check_prime(n-i)) {
//                 cout << n << " + "<<i<<" = "<<  n-1<<endl;
//                 flag = true;
//             }
//         }
//     }

//     if(!flag) {
//         cout << n;
//     }

//     return 0;
// }

