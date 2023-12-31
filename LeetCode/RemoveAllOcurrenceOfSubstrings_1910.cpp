class Solution {
public:
    string removeOccurrences(string s, string part) {
        /* String mai Function use krenge -> npos (not found) & !npos (found) 
        String mai 2 function use krenge -> (i) find & (ii) erase OR inki time complexity O(n) hai

        Time Complexity: 0(N), where N is length of s
        Space Complexity: 0(1), no extra space use*/

        while(s.find(part) != string::npos) {
            s.erase(s.find(part), part.length()); //Find that part from S, when found then Erase it
            //if inside loop then, part exists in s string
        } 

        return s; //then s ko return krvadenge 

    }
};