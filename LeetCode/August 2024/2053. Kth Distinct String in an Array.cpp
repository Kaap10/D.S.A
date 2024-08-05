class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<int> result;
        unordered_map<string, int> mp;

        for(const auto& str : arr) {
            mp[str]++;
        }

        int distinctCount=0;
        for(const auto& str : arr) {
            if(mp[str]==1) {
                distinctCount++;
                if(distinctCount==k) {
                    return str;
                }
            }
        }
        return "";
    }
};