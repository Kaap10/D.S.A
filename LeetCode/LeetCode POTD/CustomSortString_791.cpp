class Solution {
public:
    static string orderStr;
    static bool compare(char ch1, char ch2) {
        char a = orderStr.find(ch1);
        char b = orderStr.find(ch2);
        return a<b;
    }
    string customSortString(string order, string s) {
        orderStr = order;
        sort(s.begin(), s.end(), compare);
        return s;
    }
};
string Solution::orderStr;