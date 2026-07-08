# Generate Parentheses

- Platform: LeetCode
- URL: https://leetcode.com/problems/generate-parentheses/description/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-08T08:52:48.296Z

## Code
```cpp
class Solution {
public:
    vector<string> ans;
    void helper(int n, int leftP, int rightP, string curr) {
        if(leftP == n && rightP == n) {
            ans.push_back(curr);
            return;
        }
        if(leftP < n) {
            curr += '(';
            helper(n, leftP + 1, rightP, curr);
            curr.pop_back();
        }
        if(rightP < leftP) {
            curr += ')';
            helper(n, leftP, rightP + 1, curr);
            curr.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        helper(n, 0, 0, "");
        return ans;
    }
};
```