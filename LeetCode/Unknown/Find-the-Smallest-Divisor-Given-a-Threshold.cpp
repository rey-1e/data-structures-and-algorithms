# Find the Smallest Divisor Given a Threshold

- Platform: LeetCode
- URL: https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/submissions/2067370561/
- Difficulty: Unknown
- Language: C++
- Status: Accepted
- Runtime: 11
ms
- Memory: 25.99
MB
- Solved At: 2026-07-14T12:57:47.733Z

## Code
```cpp
class Solution {
public:
    int calculateThreshold(vector<int>& nums, int divisor) {
        
        int val = 0; 
        for(auto& num : nums) {
            double curr = (double) num / (double) divisor;
            val += ceil(curr);
        }
        return val;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxElement = *max_element(nums.begin(), nums.end());
        int st = 1; 
        int end = maxElement;
        int ans = INT_MAX;  
        while(st <= end) {
            int mid = st + (end - st) / 2; 
            int currThreshold = calculateThreshold(nums, mid);
            if(currThreshold <= threshold) {
                //this is a potential ans;
                ans = min(ans, mid);
                end = mid - 1; 
            } else {
                st = mid + 1; 
            }
        }
        return ans;
    }
};
```