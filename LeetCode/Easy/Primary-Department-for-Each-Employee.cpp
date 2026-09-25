# Primary Department for Each Employee

- Platform: LeetCode
- URL: https://leetcode.com/problems/primary-department-for-each-employee/submissions/2152856825/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 79 ms
- Memory: N/A
- Solved At: 2026-09-25T09:54:26.934Z

## Code
```cpp
# Write your MySQL query statement below
SELECT employee_id, department_id
FROM Employee
GROUP BY employee_id
HAVING COUNT(employee_id) = 1
UNION
SELECT employee_id, department_id
FROM Employee
WHERE primary_flag = 'Y';
```