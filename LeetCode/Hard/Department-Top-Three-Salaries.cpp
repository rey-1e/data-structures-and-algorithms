# Department Top Three Salaries

- Platform: LeetCode
- URL: https://leetcode.com/problems/department-top-three-salaries/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Hard
- Language: C++
- Status: Accepted
- Runtime: 110 ms
- Memory: N/A
- Solved At: 2026-10-04T23:27:29.040Z

## Code
```cpp
# Write your MySQL query statement below
SELECT Department, Employee, Salary
FROM 
    (
        SELECT D.name AS Department, E.name AS Employee, E.salary AS Salary, 
        DENSE_RANK() OVER(PARTITION BY D.id ORDER BY E.salary DESC) AS RNK
        FROM Employee AS E
        INNER JOIN Department AS D
        ON E.departmentId = D.id
    ) AS temp
WHERE RNK <= 3;
```