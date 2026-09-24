# Smallest Index With Digit Sum Equal to Index

- Platform: LeetCode
- URL: https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/submissions/2152114279/?envType=daily-question&envId=2026-09-24
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 30.89
MB
- Solved At: 2026-09-24T15:10:45.242Z

## Code
```cpp
class Solution {
public:
    int getSum(int num) {
        int sum = 0; 
        while(num > 0) {
            int lastDigit = num % 10;
            num = num / 10; 
            sum += lastDigit;
        }
        return sum; 
    }
    int smallestIndex(vector<int>& nums) {
        
        for(int i = 0; i < nums.size(); i++) {
            if(getSum(nums[i]) == i) return i; 
        }
        return -1; 
    }
};
```