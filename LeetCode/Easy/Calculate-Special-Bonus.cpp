# Calculate Special Bonus

- Platform: LeetCode
- URL: https://leetcode.com/problems/calculate-special-bonus/submissions/2170146900/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 72 ms
- Memory: N/A
- Solved At: 2026-10-12T11:53:15.309Z

## Code
```cpp
# Write your MySQL query statement below
SELECT employee_id,
       (CASE
            WHEN employee_id % 2 = 1 AND SUBSTRING(name, 1, 1) != 'M' THEN salary
            ELSE 0
        END
       ) AS bonus
FROM Employees
ORDER BY employee_id;
```