# The Number of Employees Which Report to Each Employee

- Platform: LeetCode
- URL: https://leetcode.com/problems/the-number-of-employees-which-report-to-each-employee/submissions/2152277858/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 109 ms
- Memory: N/A
- Solved At: 2026-09-24T17:33:49.347Z

## Code
```cpp
# Write your MySQL query statement below
SELECT emp1.reports_to AS employee_id, emp2.name AS name, COUNT(emp1.
employee_id) AS reports_count, ROUND(AVG(emp1.age), 0) AS average_age
FROM Employees AS emp1
INNER JOIN Employees AS emp2
ON emp1.reports_to = emp2.employee_id
GROUP BY emp1.reports_to
ORDER BY emp1.reports_to;
```