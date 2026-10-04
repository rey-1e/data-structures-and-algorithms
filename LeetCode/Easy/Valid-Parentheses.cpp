# Valid Parentheses

- Platform: LeetCode
- URL: https://leetcode.com/problems/valid-parentheses/submissions/2161936681/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 3
ms
- Memory: 10.18
MB
- Solved At: 2026-10-04T09:17:10.054Z

## Code
```cpp
class Solution {
public:
    bool isValid(string s) {
        stack<int> st; 
        for(int i = 0; i < s.size(); i++) {
            
        }
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
                continue;
            } 
                return false;
            } else if(s[i] == ')' && st.top() == '(') {
                st.pop();
            } else if(s[i] == '}' && st.top() == '{') {
                st.pop();
            } else if(s[i] == ']' && st.top() == '[') {
                st.pop();
            } else return false;
    }
            
            if(st.empty()) {
        return st.empty();
};
```