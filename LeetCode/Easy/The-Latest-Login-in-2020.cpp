# The Latest Login in 2020

- Platform: LeetCode
- URL: https://leetcode.com/problems/the-latest-login-in-2020/submissions/2170147996/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 84 ms
- Memory: N/A
- Solved At: 2026-10-12T11:55:04.284Z

## Code
```cpp
# Write your MySQL query statement below
SELECT user_id, MAX(time_stamp) AS last_stamp
FROM Logins
WHERE YEAR(time_stamp) = 2020
GROUP BY user_id;
```