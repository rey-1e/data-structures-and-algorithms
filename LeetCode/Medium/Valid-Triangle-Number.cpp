# Valid Triangle Number

- Platform: LeetCode
- URL: https://leetcode.com/problems/valid-triangle-number/submissions/2112483270/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 16.64
MB
- Solved At: 2026-08-19T09:13:32.572Z

## Code
```cpp
int triangleNumber(vector<int>& nums) {
        int count = 0; 
        for(int i = nums.size() -1; i >= 0; i--) {
            int left = 0;
            int right = i - 1; 
            while(left < right) {
        sort(nums.begin(), nums.end());
        }
        return count;
    //return true if left has to be moved; returns false if right has to moved; 
                if(nums[left] + nums[right] > nums[i]) {
            }
                    count += right - left; 
                } else if(nums[left] + nums[right] <= nums[i]) {
class Solution {
public:
                    left++;
                }
    }
                    //what would be the update condition/ 
                    right--;
};
```