# Count Subarrays Where Max Element Appears at Least K Times

- Platform: LeetCode
- URL: https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 131.34
MB
- Solved At: 2026-08-13T20:27:27.719Z

## Code
```cpp
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int ele = *max_element(nums.begin(), nums.end());
        int counter = 0;
        int i = 0;
            ans += i;
        }
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == ele)
            }
                counter++;
            while (counter >= k) {
                    counter--;
                if (nums[i] == ele)
        return ans;
    }
};
        long long ans = 0;
                i++;
```