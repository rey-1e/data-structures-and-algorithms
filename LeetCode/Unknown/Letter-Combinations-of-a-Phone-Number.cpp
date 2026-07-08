# Letter Combinations of a Phone Number

- Platform: LeetCode
- URL: https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/2060594217/
- Difficulty: Unknown
- Language: C++
- Status: Accepted
- Runtime: 3
ms
- Memory: 9.62
MB
- Solved At: 2026-07-08T14:08:36.006Z

## Code
```cpp
class Solution {
public:
    unordered_map<char, string> m;
    vector<string> ans;
    void helper(int idx, const string& digits, string& temp) {
        if (idx >= digits.size()) {
            // push temp in ans & return;
            ans.push_back(temp);
            return;
        }
        string curr = m[digits[idx]];
        for (char c : curr) {
            temp += c;
            helper(idx + 1, digits, temp);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";
        string temp = "";
        helper(0, digits, temp);
        return ans;
    }
};
```