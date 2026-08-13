# Length of Longest Subarray With at Most K Frequency

- Platform: LeetCode
- URL: https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/description/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-13T13:13:39.463Z

## Code
```cpp
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        //k determines the frequency. 
        if(nums.size() == 1) return 1; 
        unordered_map<int, int> m;
        int curr = 0; 
        int i = 0; 
        for(int j = 0; j < nums.size(); j++) {
            if(m.find(nums[j]) != m.end()) {
                //exists; 
                //check;
                m[nums[j]]++;
                if(m[nums[j]] > k) {
                    //j - 1 is the valid last idx, while i is 
                    the first; 
                    curr = max(curr, j - i);
                    //run i such that it reduces by k;
                    while(i < nums.size() && m[nums[j]] > k) {
                        m[nums[i]]--;
                        i++;
                    }
                } 
            } else {
                //doesn't exist; 
                m[nums[j]]++;
            }
```