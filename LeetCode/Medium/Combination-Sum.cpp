# Combination Sum

- Platform: LeetCode
- URL: https://leetcode.com/problems/combination-sum/submissions/2060361191/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 94
ms
- Memory: 72.30
MB
- Solved At: 2026-07-08T10:13:19.689Z

## Code
```cpp
class Solution {
private: 
    vector<vector<int>> ans;
public:
    void findCombinations(int idx, vector<int>& candidates, int target, vector<int> 
    temp) {
        if(target < 0) return;
        if(target == 0) {
            ans.push_back(temp);
            return;
        }
        if(idx >= candidates.size()) return;
        
        //including the eleemtn;
        temp.push_back(candidates[idx]);
        findCombinations(idx, candidates, target - candidates[idx], temp);
        temp.pop_back();
        //excluding the element;
        findCombinations(idx + 1, candidates, target, temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        findCombinations(0, candidates, target, {});
        return ans;
        //function call;
    }
};
```