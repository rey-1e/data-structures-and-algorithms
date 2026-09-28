# Employees Whose Manager Left the Company

- Platform: LeetCode
- URL: https://leetcode.com/problems/employees-whose-manager-left-the-company/submissions/2155867080/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 80 ms
- Memory: N/A
- Solved At: 2026-09-28T10:37:54.879Z

## Code
```cpp
# Write your MySQL query statement below
SELECT employee_id
FROM Employees
WHERE salary < 30000 AND
      manager_id NOT IN (SELECT employee_id FROM Employees)
      
ORDER BY employee_id ASC;
```