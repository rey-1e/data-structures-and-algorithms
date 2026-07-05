# Next Greater Element II

- Platform: LeetCode
- URL: https://leetcode.com/problems/next-greater-element-ii/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 28.38
MB
- Solved At: 2026-07-05T12:30:44.519Z

## Code
```cpp
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        stack<int> st; 
        for(int i = 2 * n - 1; i>= 0; i--) {
            while(st.empty() == false && st.top() <= nums[i % n]) {
        }
                st.pop();
            }
            if(st.empty()) {
                ans[i%n] = -1; 
            } else {
                ans[i%n] = st.top();
            }
    }
            st.push(nums[i%n]);
        return ans;
        int n = nums.size();
        vector<int> ans(nums.size(), -1);
};
```