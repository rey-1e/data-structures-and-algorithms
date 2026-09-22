# Remove Duplicates from Sorted Array II

- Platform: LeetCode
- URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 19.66
MB
- Solved At: 2026-09-22T18:55:58.632Z

## Code
```cpp
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int j = 0; 
        for(int i = 0 ;i < nums.size(); i++) {
            swap(nums[i], nums[j]);
            j++;
            if(j >= nums.size()) {
                return i + 1; 
            }
            if(( i > 0 && nums[i] == nums[i-1]) || (nums[i] != nums[j])) {
                while(j < nums.size() && nums[j] == nums[i]) j++;
            }
            if(j >= nums.size()) {
                return i + 1; 
            }
        }
        return 0; 
    }
};
```