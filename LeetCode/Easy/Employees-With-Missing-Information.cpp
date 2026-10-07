# Employees With Missing Information

- Platform: LeetCode
- URL: https://leetcode.com/problems/employees-with-missing-information/submissions/2165566850/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 121 ms
- Memory: N/A
- Solved At: 2026-10-07T17:21:29.794Z

## Code
```cpp
# Write your MySQL query statement below
SELECT E.employee_id AS employee_id
FROM Employees AS E
LEFT JOIN Salaries AS S
ON E.employee_id = S.employee_id
WHERE E.name IS NULL
      OR 
      S.salary IS NULL
UNION
SELECT S.employee_id AS employee_id
FROM Salaries AS S
LEFT JOIN Employees AS E
ON E.employee_id = S.employee_id
WHERE E.name IS NULL
      OR 
      S.salary IS NULL
ORDER BY employee_id ASC;
```