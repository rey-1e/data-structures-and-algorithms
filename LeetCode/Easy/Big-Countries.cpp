# Big Countries

- Platform: LeetCode
- URL: https://leetcode.com/problems/big-countries/submissions/2139343297/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 87 ms
- Memory: N/A
- Solved At: 2026-09-12T09:30:02.164Z

## Code
```cpp
# Write your MySQL query statement below
SELECT name, population, area 
FROM World
WHERE area >= 3000000 OR population >= 25000000;
```