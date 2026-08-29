# First Letter to Appear Twice

- Platform: LeetCode
- URL: https://leetcode.com/problems/first-letter-to-appear-twice/submissions/2124238820/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 8.54
MB
- Solved At: 2026-08-29T18:21:08.811Z

## Code
```cpp
class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> st; 
        for(char c : s) {
            if(st.find(c) != st.end()) {
        }
                return c; 
            }
    }
            st.insert(c);
        return ' ';
};
```