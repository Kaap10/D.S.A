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
int main() {
    int low, high, i;
    bool is_prime = true;

    cout << "Enter the two numbers: ";
    cin >> low >> high;

    while(low<=high) {
        is_prime = true;

        if(low==0 || low==1) {
            is_prime = false;
        }

        for(int i=0; i<=low/2; i++) {
            if(low%i==0) {
                is_prime = false;   
                break;
            }
        }

        if(is_prime) 
        cout << low << " ";
        low ++;
    }
    return 0;
}