# Make The String Great

- Platform: LeetCode
- URL: https://leetcode.com/problems/make-the-string-great/submissions/2147123115/?envType=problem-list-v2&envId=stack
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 9.20
MB
- Solved At: 2026-09-20T01:50:05.028Z

## Code
```cpp
class Solution {
public:
    string makeGood(string s) {
        stack<char> st; 
        for(int i = 0 ; i < s.size(); i++) {
            if(!st.empty() && s[i] != st.top() && (toupper(s
            [i]) == st.top() || tolower(s[i]) == st.top())) {
                st.pop(); 
                continue; 
            }
            st.push(s[i]);
        }
        string ans = "";
        //empty the stack into a string; 
        while(!st.empty()) {
            //empty the string; 
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};
```