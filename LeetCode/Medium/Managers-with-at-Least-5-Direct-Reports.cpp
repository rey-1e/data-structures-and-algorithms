# Managers with at Least 5 Direct Reports

- Platform: LeetCode
- URL: https://leetcode.com/problems/managers-with-at-least-5-direct-reports/submissions/2150541777/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 71 ms
- Memory: N/A
- Solved At: 2026-09-23T06:20:53.205Z

## Code
```cpp
# Write your MySQL query statement below
SELECT name
FROM Employee
WHERE id IN (
    SELECT managerId
    FROM Employee
    GROUP BY managerId
    HAVING COUNT(managerId) >= 5
);
```