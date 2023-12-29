class Solution {
public:
    string removeDuplicates(string s) {
        //Approach:
        /*1. Create a temp string
        2. compare input strings element with right most elemtn of temp string\
        if both elements are different, then PUSH
        else POP */
        string temp = ""; //ek temp string banali
        int n = s.length();
        int i=0;

        while(i<n) {
            if(temp.length()>0 && s[i]==temp[temp.length()-1]) { //this is imp to check that lenght>0 honi chaiye, nhi toh -1 o/p aayega, OR S string ke element or right most element of temp se compare krenge, agar same hua toh POP
                temp.pop_back();
            }

            else {
                temp.push_back(s[i]); // elements different hua toh PUSH
            }
            i++;
        }
        return temp; // return kradenge

    }
};