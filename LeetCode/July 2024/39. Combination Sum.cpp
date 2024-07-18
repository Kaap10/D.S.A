class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<int>& current, vector<vector<int>>& result, int start) {
        if(target==0) {
            result.push_back(current);
            return;
        }

        for(int i=start; i<candidates.size(); i++) {
            if(candidates[i] > target) break;
            current.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], current, result, i);
            current.pop_back();
        }
    }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> result;
        vector<int> current;
        backtrack(candidates, target, current, result, 0);
        return result;
    }
};