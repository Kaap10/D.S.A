class Solution {
public:
    int myAtoi(string s) {
        int i = 0, sign = 1, num = 0;

        while (i < s.length() && s[i] == ' ')
            i++;

        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        while (i < s.length() && isdigit(s[i])) {
            int digit = s[i] - '0';
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            num = num * 10 + digit;
            i++;
        }

        return sign * num;
    }
};