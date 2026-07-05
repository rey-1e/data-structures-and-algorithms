# Next Greater Element I

- Platform: LeetCode
- URL: https://leetcode.com/problems/next-greater-element-i/submissions/2056793880/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 12.93
MB
- Solved At: 2026-07-05T10:25:58.323Z

## Code
```cpp
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int> st; 
        for(int i = nums2.size() -1; i >= 0; i--) {
        }
            while(st.empty() == false && st.top() <= nums2[i]) {
                st.pop();
            }
            if(st.empty()) {
                m[nums2[i]] = -1; 
            } else {
            }
            st.push(nums2[i]);
        unordered_map<int, int> m; 
                m[nums2[i]] = st.top();
        vector<int> ans; 
        for(auto num : nums1) {
            ans.push_back(m[num]);
        }
    }
        return ans;
};
```