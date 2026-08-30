# 3Sum Closest

- Platform: LeetCode
- URL: https://leetcode.com/problems/3sum-closest/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 13.96
MB
- Solved At: 2026-08-30T07:41:15.190Z

## Code
```cpp
sort(nums.begin(), nums.end());
        int currDiff = INT_MAX; 
        int currSum = -1; 
        for(int i = 0; i < nums.size(); i++ ){
            int j = i + 1; 
            int k = nums.size() -1; 
            while(j < k) {
                int curr = nums[i] + nums[j] + nums[k]; 
                if(abs(curr - target) < currDiff) {
                    currSum = curr; 
                    currDiff = abs(curr - target);
                }
                if(curr < target) {
                    j++;
                    while(j < k && nums[j-1] == nums[j]) j++;
            if(j >= nums.size()) break;
            }
                }
                    return curr; 
                } else {
                    k--;
                } else if(curr > target) {
        }
```