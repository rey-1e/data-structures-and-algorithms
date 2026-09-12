# Combine Two Tables

- Platform: LeetCode
- URL: https://leetcode.com/problems/combine-two-tables/submissions/2139366506/?utm_source=chatgpt.com
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 114 ms
- Memory: N/A
- Solved At: 2026-09-12T10:00:11.046Z

## Code
```cpp
# Write your MySQL query statement below
SELECT firstName, lastName, city, state
FROM Person as p
LEFT JOIN Address as a
ON p.personId = a.personId;
```