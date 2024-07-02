class Solution {
public:
    static string orderStr;
    static bool compare(char ch1, char ch2 ) {
        // char a = orderStr.find(ch1);
        // char b = orderStr.find(ch2);
        return orderStr.find(ch1)<orderStr.find(ch2);
    }
    string customSortString(string order, string s) {
        orderStr = order;
        sort(s.begin(), s.end(), compare);
        return s;
    }
};
string Solution::orderStr;

//Another approach
class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> count(26, 0);
        for (char ch : s) {
            count[ch - 'a']++;
        }

        string result = "";
        for (char ch : order) {
            result += string(count[ch - 'a'], ch);
            count[ch - 'a'] = 0;
        }

        for (char ch = 'a'; ch <= 'z'; ch++) {
            result += string(count[ch - 'a'], ch);
        }

        return result;
    }
};