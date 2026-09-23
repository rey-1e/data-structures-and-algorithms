# Confirmation Rate

- Platform: LeetCode
- URL: https://leetcode.com/problems/confirmation-rate/submissions/2150564278/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 180 ms
- Memory: N/A
- Solved At: 2026-09-23T06:40:09.160Z

## Code
```cpp
# Write your MySQL query statement below
SELECT S.user_id, 
       ROUND(
        -- confirmation_rate logic...
       2) AS confirmation_rate
FROM Signups AS S
LEFT JOIN Confirmations AS C
ON S.user_id = C.user_id
            COUNT(
                CASE
            )
                    WHEN action = 'confirmed' THEN 1
                END
            /
            COUNT(
                S.user_id
            ), 
GROUP BY S.user_id;
```