class Solution {
    public:

    bool isPrefixAndSuffix(const string& str1,string& str2) {
        int n = string.length();
        return str2.substr(0,n) == str1 && str2.substr(str2.length() - n) == str1;
    }
    int countPrefixSuffixPairs(vector<string> &words) {
        int count = 0;
        int n = words.size();

        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n;j++) {
                if(isPrefixAndSuffic(words[i], words[i+1])) {
                    count++;
                }
            }
        }

        return count;
    }
}