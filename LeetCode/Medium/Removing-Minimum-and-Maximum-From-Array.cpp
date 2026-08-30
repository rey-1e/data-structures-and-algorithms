# Removing Minimum and Maximum From Array

- Platform: LeetCode
- URL: https://leetcode.com/problems/removing-minimum-and-maximum-from-array/?envType=daily-question&envId=2026-08-30
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 91.91
MB
- Solved At: 2026-08-30T16:32:55.242Z

## Code
```cpp
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int maxii = max_element(nums.begin(), nums.end()) - nums.begin();
        int minii = min_element(nums.begin(), nums.end()) - nums.begin();
        int L = -1; 
        int R = -1; 
        if(maxii < minii) {
            L = maxii; 
        } else {
            R = minii; 
            L = minii; 
        }
    }
            R = maxii;
        int currMin = min(R + 1, n - L);
        int n = nums.size(); 
        return min(currMin, (L + 1 + n - R)); 
};
```