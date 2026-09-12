# Find Customer Referee

- Platform: LeetCode
- URL: https://leetcode.com/problems/find-customer-referee/submissions/2139340469/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 79 ms
- Memory: N/A
- Solved At: 2026-09-12T09:26:26.339Z

## Code
```cpp
# Write your MySQL query statement below
SELECT name
FROM Customer 
WHERE referee_id != 2 OR referee_id IS NULL;
```