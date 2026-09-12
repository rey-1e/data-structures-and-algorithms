# Employee Bonus

- Platform: LeetCode
- URL: https://leetcode.com/problems/employee-bonus/submissions/2139979897/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 116 ms
- Memory: N/A
- Solved At: 2026-09-12T20:08:09.611Z

## Code
```cpp
# Write your MySQL query statement below
SELECT name, bonus
FROM Employee
LEFT JOIN BONUS
ON Employee.empId = Bonus.empId
WHERE bonus < 1000 OR bonus IS NULL;
```