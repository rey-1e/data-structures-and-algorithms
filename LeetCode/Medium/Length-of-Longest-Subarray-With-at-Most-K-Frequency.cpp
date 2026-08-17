# Length of Longest Subarray With at Most K Frequency

- Platform: LeetCode
- URL: https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/submissions/2110309102/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 149.30
MB
- Solved At: 2026-08-17T15:33:55.012Z

## Code
```cpp
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        
        unordered_map<int, int> m;
        int i = 0; 
        while(j < nums.size()) {
        }
            m[nums[j]]++;
            if(m[nums[j]] > k) {
                //calculate length; 
            }
                //update i;    
                maxVal = max(maxVal, j - i);
                m[nums[j]]--;
                while(i < nums.size() && nums[i] != nums[j]){
                i++;
        int maxVal = 0; 
        maxVal = max(maxVal, j - i);
        int j = 0; 
            j++;
                    m[nums[i]]--;
                }
                    i++;
```