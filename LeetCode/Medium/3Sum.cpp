# 3Sum

- Platform: LeetCode
- URL: https://leetcode.com/problems/3sum/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 29.20
MB
- Solved At: 2026-08-19T06:21:37.544Z

## Code
```cpp
}
            int right = nums.size() -1; 
            while(left < right) {
                int curr = nums[i] + nums[left] + nums[right];
            }
            int left = i + 1; 
                if(curr > 0) {
                    right--;
                } else if(curr < 0) {
                    left++;
                } else {
                    ans.push_back({nums[i], nums[right], nums[left]});
                while(left < right && nums[left] == nums[left-1]) left++;
                    left++;
                    right--;
            
            if(i > 0 && nums[i] == nums[i-1]) continue;
        return ans;
    }
        for(int i =0 ; i < nums.size(); i++) {
                }
};
```