# Combination Sum III

- Platform: LeetCode
- URL: https://leetcode.com/problems/combination-sum-iii/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-08T14:08:29.729Z

## Code
```cpp
class Solution {
public:
    vector<vector<int>> ans;
    void helper(int idx, vector<int>& nums, vector<int> temp, int sum, int k, int n) {
        //base cases; 
        if(temp.size() > k || sum > n) return;
        if(sum == n && temp.size() == k) {
            ans.push_back(temp);
            return;
        }
        if(idx >= nums.size()) return;
        temp.push_back(nums[idx]);
        helper(idx + 1, nums, temp, sum + nums[idx], k, n);
        temp.pop_back();
        
        //exclusion;
        helper(idx + 1, nums, temp, sum, k, n);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        //function call and return; 
        helper(0, nums, {}, 0, k, n);
```