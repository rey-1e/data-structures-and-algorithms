# Combinations

- Platform: LeetCode
- URL: https://leetcode.com/problems/combinations/submissions/2105949735/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 109.98
MB
- Solved At: 2026-08-13T20:38:39.739Z

## Code
```cpp
return; 
        }
        //take the value; 
        temp.push_back(i);
        //call the function; 
        helper(i + 1, k, n, temp, ans);
        temp.pop_back();
        //don't take the value; 
        helper(i + 1, k, n, temp, ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans; 
        vector<int> temp;
        helper(1, k, n, temp, ans);
        return ans;
        
    }
        if(i > n) {
        }
            ans.push_back(temp);
            return; 
public:
    void helper(int i, int k, int n, vector<int>& 
    temp, vector<vector<int>>& ans) {
        if(temp.size() == k) {
class Solution {
```