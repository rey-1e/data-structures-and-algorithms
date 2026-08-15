# Missing Number

- Platform: LeetCode
- URL: https://leetcode.com/problems/missing-number/description/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: N/A
- Solved At: 2026-08-15T12:00:15.550Z

## Code
```cpp
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != i) {
        }
                return i;
            }
    }
        return nums.size();
};
```