# Baseball Game

- Platform: LeetCode
- URL: https://leetcode.com/problems/baseball-game/submissions/2162044178/?utm_source=chatgpt.com
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 12.91
MB
- Solved At: 2026-10-04T11:37:28.610Z

## Code
```cpp
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st; 
        for(int i = 0; i < operations.size(); i++) {
            if(operations[i] == "+") {
        }
                //add last two numbers... 
            } else if(operations[i] == "D") {
                //double the top value from the stack and push in stack.
            } else if(operations[i] == "C") {
                //pop from the stack, the last value. 
            } else {
                //push into the stack... 
            }
                int first = st.top();
                st.pop();
                int second = st.top();
                st.push(first);
                st.push(first + second);
                int value = st.top() + st.top();
                st.push(value);
                st.pop();
                st.push(stoi(operations[i]));
        int ans = 0; 
        while(st.empty() == false) {
            ans += st.top();
            st.pop();
        }
        return ans; 
    }
```