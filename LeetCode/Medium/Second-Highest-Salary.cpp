# Second Highest Salary

- Platform: LeetCode
- URL: https://leetcode.com/problems/second-highest-salary/submissions/2164187746/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 102 ms
- Memory: N/A
- Solved At: 2026-10-06T11:54:53.773Z

## Code
```cpp
# Write your MySQL query statement below
SELECT MAX(salary) AS SecondHighestSalary
FROM 
    (
        SELECT *,
        DENSE_RANK() OVER(ORDER BY salary DESC) AS RNK
        FROM Employee
    ) AS TEMP_TABLE
WHERE RNK = 2;
```