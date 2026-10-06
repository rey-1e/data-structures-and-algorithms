# Fix Names in a Table

- Platform: LeetCode
- URL: https://leetcode.com/problems/fix-names-in-a-table/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-10-06T09:39:34.924Z

## Code
```cpp
# Write your MySQL query statement below
SELECT user_id, 
       CONCAT(
        UPPER(LEFT(name, 1)),
        LOWER(SUBSTRING(name, 2))
       ) AS name
FROM Users
ORDER BY user_id ASC;
```