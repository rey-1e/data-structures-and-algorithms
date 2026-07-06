# Remove K Digits

- Platform: LeetCode
- URL: https://leetcode.com/problems/remove-k-digits/submissions/2058457207/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 11.31
MB
- Solved At: 2026-07-06T18:42:16.819Z

## Code
```cpp
class Solution {
public:
    string removeKdigits(string num, int k) {
        
        //edge case 1;
        if(k == num.size()) return "0";
        stack<char> st; 
        for(int i = 0; i < num.size(); i++) {
            while(st.empty() == false && st.top() > num[i] && k > 0) {
        }
                st.pop();
            }
            st.push(num[i]);
                k--;
        while(k > 0) {
            st.pop();
        }
            k--;
        string ans = "";
        while(!st.empty()) {
        if(ans == "") return "0";
        return ans;
        while(ans != "" && ans.back() == '0') {
            ans.pop_back();
        }
            ans += st.top();
        }
    }
            st.pop();
        reverse(ans.begin(), ans.end());
};
```