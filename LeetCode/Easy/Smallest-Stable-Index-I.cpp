# Smallest Stable Index I

- Platform: LeetCode
- URL: https://leetcode.com/problems/smallest-stable-index-i/?envType=daily-question&envId=2026-09-04
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 31.49
MB
- Solved At: 2026-09-04T13:43:44.146Z

## Code
```cpp
vector<int> maxs(nums.size(), 0);
        maxs[0] = nums[0]; 
        mins[nums.size() - 1] = nums[nums.size() -1];
        for(int i = 1; i < nums.size(); i++) {
            maxs[i] = max(nums[i], maxs[i-1]);
        }
        for(int i = nums.size() -2; i >= 0; i--) {
            mins[i] = min(nums[i], mins[i+1]);
        }
        for(int i = 0; i < nums.size(); i++) {
            if(maxs[i] - mins[i] <= k) {
                return i;
            }
        }
    int firstStableIndex(vector<int>& nums, int k) {
class Solution {
public:
        vector<int> mins(nums.size(), 0);
        return -1; 
    }
```