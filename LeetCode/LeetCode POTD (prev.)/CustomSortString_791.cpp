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

//Approach-1
class Solution {
public:
    string customSortString(string order, string str) {
        int count[26] = {0};
        
        for(char &x : str)
            count[x-'a']++;
        
        string result = "";
        for(char &ch : order) {
            while(count[ch-'a']--) {
                result.push_back(ch);
            }
        }
        
        //Add the characters which are not present in 'order'
        for(char &ch : str) {
            if(count[ch-'a'] > 0) {
                result.push_back(ch);
            }
        }
        
        return result;
    }
};

// Approach-3 (using Lambda comparator)
class Solution {
public:
    string customSortString(string order, string str) {
        vector<int> index(26, -1);
        
        for(int i = 0; i<order.length(); i++)
            index[order[i]-'a'] = i;
        
        
        auto lambda = [&index](char &ch1, char &ch2) {
            return index[ch1-'a'] < index[ch2-'a'];
        };
        
        sort(begin(str), end(str), lambda);
        return str;
        
    }
};