# Combination Sum III

- Platform: LeetCode
- URL: https://leetcode.com/problems/combination-sum-iii/submissions/2060573533/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 7
ms
- Memory: 14.67
MB
- Solved At: 2026-07-08T14:08:22.234Z

## Code
```cpp
class Solution {
public:
    vector<vector<int>> ans;

    void helper(int idx, vector<int>& nums, vector<int> temp, int sum, int k, int n) {
        //base cases; 
        if(temp.size() > k || sum > n) return;

        if(sum == n && temp.size() == k) {

            ans.push_back(temp);

            return;
        }

        if(idx >= nums.size()) return;



        temp.push_back(nums[idx]);
        helper(idx + 1, nums, temp, sum + nums[idx], k, n);
        temp.pop_back();
```