# Subsets II

- Platform: LeetCode
- URL: https://leetcode.com/problems/subsets-ii/submissions/2061833820/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0
ms
- Memory: 0.00
MB
- Solved At: 2026-07-09T14:32:23.802Z

## Code
```cpp
class Solution {
public:
    vector<vector<int>> ans;
    void findSubsets(int idx, vector<int>& nums, vector<int> temp) {
        if(idx >= nums.size()){
            ans.push_back(temp);    
            return;
        }
        temp.push_back(nums[idx]);
        findSubsets(idx + 1, nums, temp);
        temp.pop_back();
        int j = idx + 1; 
        while(j < nums.size() && nums[j] == nums[idx]) j++;
        findSubsets(j, nums, temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        //function call;
        findSubsets(0, nums, {});
        //return here; 
        return ans;
    }
};
```