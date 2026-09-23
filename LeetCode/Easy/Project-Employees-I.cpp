# Project Employees I

- Platform: LeetCode
- URL: https://leetcode.com/problems/project-employees-i/submissions/2150585258/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 100 ms
- Memory: N/A
- Solved At: 2026-09-23T06:58:21.452Z

## Code
```cpp
# Write your MySQL query statement below
SELECT p.project_id AS project_id, ROUND(AVG(e.experience_years), 2) AS 
average_years
FROM Project AS p
INNER JOIN Employee AS e
ON p.employee_id = e.employee_id
GROUP BY p.project_id;
```