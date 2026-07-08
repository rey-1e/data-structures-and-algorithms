# Combination Sum II

- Platform: LeetCode
- URL: https://leetcode.com/problems/combination-sum-ii/submissions/2060377352/
- Difficulty: Unknown
- Language: C++
- Status: Accepted
- Runtime: 112
ms
- Memory: 41.72
MB
- Solved At: 2026-07-08T10:27:59.746Z

## Code
```cpp
class Solution {
public:
    vector<vector<int>> ans; 
    void findCombinations(int idx, vector<int>& candidates, int target, vector<int> 
    temp) {
        //base case; 
        if(target == 0) {
            ans.push_back(temp);
            return;
        }
        if(target < 0 || idx >= candidates.size()) return;
        
        
        //inclusion;
        temp.push_back(candidates[idx]);
        findCombinations(idx + 1, candidates, target - candidates[idx], temp);
        temp.pop_back();
        int j = idx + 1; 
        while(j < candidates.size() && candidates[j] == candidates[idx]) j++;
        //we have a unique value of j different from idx; 
        //exclusion;
        findCombinations(j, candidates, target, temp);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        // vector<int> temp = {};
        sort(candidates.begin(), candidates.end());
        findCombinations(0, candidates, target, {});
        return ans;
    }
};
```