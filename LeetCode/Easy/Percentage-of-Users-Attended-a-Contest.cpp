# Percentage of Users Attended a Contest

- Platform: LeetCode
- URL: https://leetcode.com/problems/percentage-of-users-attended-a-contest/submissions/2150603483/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 103 ms
- Memory: N/A
- Solved At: 2026-09-23T07:17:47.878Z

## Code
```cpp
# Write your MySQL query statement below
SELECT contest_id, 
       ROUND(
        (COUNT(
            CASE
            WHEN contest_id IS NOT NULL THEN 1
            END
        ) * 100)
        /
        (SELECT COUNT(DISTINCT user_id) FROM Users)
       , 2) AS percentage
FROM Users AS u
LEFT JOIN Register AS r
ON u.user_id = r.user_id
GROUP BY r.contest_id
WHERE contest_id IS NOT NULL
ORDER BY percentage DESC, contest_id ASC;
```