# Sum of Subarray Ranges

- Platform: LeetCode
- URL: https://leetcode.com/problems/sum-of-subarray-ranges/description/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-06T18:42:30.337Z

## Code
```cpp
class Solution {
public:
    vector<int> PSE(vector<int>& nums) {
        stack<int> st;
        vector<int> ans(nums.size(), 0); 
        for(int i = 0; i < nums.size(); i++) {
            while(st.empty() == false && nums[st.top()] >= nums[i]) st.pop();
            if(st.empty()) {
                ans[i] = -1;
            } else {
                ans[i] = st.top();
            }
            st.push(i);
        }
        return ans;
    }
    vector<int> NSE(vector<int>& nums) {
        stack<int> st; 
        vector<int> ans(nums.size(), 0);
        for(int i = nums.size() -1; i>= 0; i--) {
            while(st.empty() == false && nums[st.top()] > nums[i]) st.pop();
            if(st.empty()) {
                ans[i] = nums.size();
            } else {
                ans[i] = st.top();
            }
            st.push(i);
        }
        return ans;
    }
    vector<int> PLE(vector<int>& nums) {
        stack<int> st; 
        vector<int> ans(nums.size(), 0);
        for(int i = 0; i < nums.size(); i++) {
            while(st.empty() == false && nums[st.top()] <= nums[i]) st.pop();
            if(st.empty()) {
                ans[i] = -1;
```