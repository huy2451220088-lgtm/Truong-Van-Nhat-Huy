class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& combination, int start) {
        if (target == 0) {
            res.push_back(combination);
            return;
        }
        for (int i = start; i < candidates.size(); i++) {
            if (i > start && candidates[i] == candidates[i - 1]) continue;
            if (candidates[i] > target) break;
            
            combination.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], res, combination, i + 1);
            combination.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> combination;
        backtrack(candidates, target, res, combination, 0);
        return res;
    }
};