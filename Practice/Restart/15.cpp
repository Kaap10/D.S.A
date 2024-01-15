//mereko GCD and HCF nikalna hai

#include<iostream>
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

//while loop se bhi kr skte hain > bdiya hai
// int main() {
//     int c1,c2;
//     cout << "Enter two numbers: ";
//     cin >> c1 >> c2;

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
int main() {
    int n1, n2, MAX;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    MAX = (n1>n2) ? n1:n2;
    do {
        if(MAX%n1==0 && MAX%n2==0) {
            cout << MAX;
            break;
        }
        else {
            MAX++;
        }
    }
    while (true);
    return 0;
}

















