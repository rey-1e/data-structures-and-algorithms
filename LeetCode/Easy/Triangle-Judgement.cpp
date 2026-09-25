# Triangle Judgement

- Platform: LeetCode
- URL: https://leetcode.com/problems/triangle-judgement/submissions/2152858760/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 104 ms
- Memory: N/A
- Solved At: 2026-09-25T09:56:58.235Z

## Code
```cpp
# Write your MySQL query statement below
SELECT x, y, z,
       (CASE
            WHEN (x + y > z AND y + z > x AND z + x > y) THEN 'Yes'
            ELSE 'No'
       END) AS triangle
FROM Triangle;
```