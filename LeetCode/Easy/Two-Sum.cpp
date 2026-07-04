# Two Sum

- Platform: LeetCode
- URL: https://leetcode.com/problems/two-sum/submissions/2056265483/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 3
ms
- Memory: 14.72
MB
- Solved At: 2026-07-04T21:36:14.875Z

## Code
```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (seen.count(complement)) {
                return {seen[complement], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};
```