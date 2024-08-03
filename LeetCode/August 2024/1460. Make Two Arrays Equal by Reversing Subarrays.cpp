class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int> mp;

        for(int num : target) {
            mp[num]++;
        }

        for(int num : arr) {
            mp[num]--;

            if(mp[num]==0) {
                mp.erase(num);
            }
        }

        return mp.empty();
    }
};