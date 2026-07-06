# Sum of Subarray Ranges

- Platform: LeetCode
- URL: https://leetcode.com/problems/sum-of-subarray-ranges/submissions/2057990584/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 13.92
MB
- Solved At: 2026-07-06T11:55:01.181Z

## Code
```cpp
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans = 0; 
        for(int i = 0; i < nums.size(); i++) {
            int currMin = INT_MAX;
                currMin = min(currMin, nums[j]);
        }
    }
            for(int j = i; j < nums.size(); j++) {
            int currMax = INT_MIN;
                currMax = max(currMax, nums[j]);
                ans += (currMax - currMin);
        return ans;
            
            }
};
```