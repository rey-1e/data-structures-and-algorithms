# Count Salary Categories

- Platform: LeetCode
- URL: https://leetcode.com/problems/count-salary-categories/submissions/2152992960/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 79 ms
- Memory: N/A
- Solved At: 2026-09-25T13:08:34.590Z

## Code
```cpp
FROM Accounts
    COUNT(
        CASE    
            WHEN income > 50000 THEN 1
        END
    ) AS accounts_count
UNION 
SELECT
    'Low Salary' AS category,
    COUNT(
        CASE    
            WHEN income < 20000 THEN 1
        END
    ) AS accounts_count
FROM Accounts
UNION
SELECT
    'Average Salary' AS category,
    COUNT(
        CASE    
            WHEN income >= 20000 AND income <= 50000 THEN 1
        END
    'High Salary' AS category,
SELECT
    ) AS accounts_count
FROM Accounts
```