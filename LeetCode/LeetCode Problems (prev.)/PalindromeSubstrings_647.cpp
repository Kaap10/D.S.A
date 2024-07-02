//Appraoch->
        /*1. Check the odd lenghts substring, jo substring ho
          2. Check the Even lengths substring, jo substring ho  
          3. Return total number of substring = odd + even
          
          Time Complexity: 0(N), where N is length of s
          Space Complexity: 0(1), no extra space use*/

class Solution {
public:
    
    int expand(string s, int i, int j) {
        int count =0;
        while(i>=0 && j<s.length() && s[i]==s[j]) { //time bound condition -> nhi toh, i zero ke -ve mai chla jata & j string ki lenght se bahar chla jata
            count++; //jab tak palindrome milta rhega tab tak count++ krte rhenge
            i--; //i left jata rhega
            j++; //j right jata rhega
        }
        return count;
    }

    int countSubstrings(string s) {
          int totalCount = 0;
          int center=0;

          while(center<s.length()) {
              int oddCount = expand(s , center, center); //ODD ki conditon hai, i or j ek bhi point krenge
              int evenCount = expand(s , center, center+1); //EVEN ki condition hai, j, i ke irght side aayega, dono alaga alag 

              totalCount = totalCount + oddCount + evenCount; //jo jo palindrom mila, sabko add krdenge
              center++; //center ko bada te rhenge
          }
          return totalCount;
    }
};