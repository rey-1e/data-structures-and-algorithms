# Remove K Digits

- Platform: LeetCode
- URL: https://leetcode.com/problems/remove-k-digits/description/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-06T20:09:19.437Z

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
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k > 0) {
            st.pop();
            k--;
        }
        string ans = "";
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        while(ans != "" && ans.back() == '0') {
            ans.pop_back();
        }
        if(ans == "") return "0";
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
```