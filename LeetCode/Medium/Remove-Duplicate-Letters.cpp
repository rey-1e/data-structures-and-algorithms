# Remove Duplicate Letters

- Platform: LeetCode
- URL: https://leetcode.com/problems/remove-duplicate-letters/submissions/2127276341/?envType=problem-list-v2&envId=stack
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 9.53
MB
- Solved At: 2026-09-01T13:50:16.233Z

## Code
```cpp
class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char> st; 
        vector<int> letters(26, 0);
        vector<bool> visited(26, false);
        for(char c : s) {
            letters[c - 'a']++;
        }
        for(int i = 0; i < s.size(); i++) {
            while(!st.empty() && letters[st.top() - 'a'] > 0 && st.top() > s[i] && visited[s
                
                visited[st.top() - 'a'] = false;
                
                st.pop();
            } 
            if(visited[s[i]- 'a'] == false) {
            st.push(s[i]);
            }
                
            visited[s[i] - 'a'] = true; 
            letters[s[i] - 'a']--;
        }
        //empty the stack into a string; 
        string ans = "";
        while(!st.empty()) {
            ans = st.top() + ans;
            [i] - 'a'] == false) {
```