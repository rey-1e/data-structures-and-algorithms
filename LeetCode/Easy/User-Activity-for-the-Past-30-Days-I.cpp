# User Activity for the Past 30 Days I

- Platform: LeetCode
- URL: https://leetcode.com/problems/user-activity-for-the-past-30-days-i/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 95 ms
- Memory: N/A
- Solved At: 2026-09-24T16:18:21.505Z

## Code
```cpp
# Write your MySQL query statement below
SELECT activity_date AS day, COUNT(DISTINCT user_id) AS active_users
FROM Activity
GROUP BY activity_date
HAVING activity_date <= '2019-07-27' AND activity_date > '2019-07-27' - INTERVAL 30 DAY;
```