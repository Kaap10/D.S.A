class Solution {
public:
    //simple palindrome ka function banyenge
    bool checkPalindrome(string s, int start, int end) {
        while(start<=end) {
            if(s[start]==s[end]) { //agar same hua toh start or end ko dono ko aage badhado
                start++;
                end--;
            }
            else {
                return false; //same nhi hua toh return false;
            }
        }
        return true; //same hone ke baad return true
    }
    bool validPalindrome(string s) {
        //Approach -> Two Pointer
        // Step-01: when s[start] and s[end] are equal, then start++ & end--
        // Step-02: when s[start] and s[end] are not equal then, remove atmost 1 character 
        //          s[start] OR s[end] then check plaindrome for remaining string after removal
        // Step-03: then return true or false

        // TC-> O(n)
        // SC-> O(1)
        int n = s.length(); //lenght nikal lenge
        int start=0; //start ko zero kredenge
        int end = n-1; //end last mai

        while(start<=end) { //start end se = ya less than hona chaiye
            if(s[start]==s[end]) { //equal hua toh start or end ko ++ krdo
                start++;
                end--;
            }

            else {
                bool ans1 = checkPalindrome(s, start+1, end); //not equal aane ke baad, dono mai se 1 ko hatao baari baari, asn1 mai left vale ko hataya
                bool ans2 = checkPalindrome(s, start, end-1); //ans 2 mai right vale ko haataya 

                return ans1 || ans2; // jo palindrom de rha hoga, toh return hoajeyag using OR
            }
        }
        return true; //true return kradenge if pehle se hi palindrome 
    }
};