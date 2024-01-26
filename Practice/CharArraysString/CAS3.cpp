//Remove all adjacent duplicates in string (leetcode-1047)
// I/p -> a b b a c a 
// o/p -> c a
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;


// class Solution {
//     public:
//     string removeDuplicates(string s) {
//         //new string
//         string temp = "";
//         int n = s.length();
//         int i=0;
//         int k = temp.length();

//         while(i<n) {
//             if(k>0 && s[i]==temp[k-1]) {
//                 temp.pop_back();
//             }

//             else {
//                 temp.push_back();
//             }
//             i++;
//         }
//         return temp;
//     }
// };


//Remove all occurence of a substring (leetcode - 1910)

// class Solution{
//     public:

//     string removeAllOccurence(string s, string part) {
//         while(s.find(part)!=string::npos) {
//             s.erase(s.find(part), part(length));
//         }
//         return s;
//     }
// }

//Check Palindrome II (lafda hai is baar, delete krvana)
class Solution {
    public:

    bool checkPalindrome(string s, int start, int end) {
        while(start<=end) {
            if(s[start]=s[end]) {
                start++;
                end--;
            }
            else {
                return false;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int n = s.length();
        int start = 0;
        int end = n-1;

        while(start<end) {
            if(s[start]==s[end]) {
                start++;
                end--;
            }

            else {
                bool ans1 = checkPalindrome(s, start+1, end);
                bool ans2 = checkPalindrome(s, start, end-1);

                return ans1 || ans2;
            }
        }
        return true;
    }
};

//program 04 -> Palindromic Strings 

class Solution{
    public:

    int expand(string s, int i, int j) {
        int count = 0;

        while(i>=0 && j<s.length() && s[i]==s[j]) {
            count++;
            i--;
            j++;
        }
        return count;
    }

    int countSubstrings(string s) {
        int totalCount = 0;
        int center = 0;
        
        while(center<s.length()) {
            int oddCount = expand(s, center, center);
            int evenCount = expand(s, center, center+1);
            totalCount = totalCount + oddCount + evenCount;
            center++;
        }
        return totalCount;  
    }
};