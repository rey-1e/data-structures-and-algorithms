# Find Followers Count

- Platform: LeetCode
- URL: https://leetcode.com/problems/find-followers-count/submissions/2152227815/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 595
ms
- Memory: N/A
- Solved At: 2026-09-24T16:52:55.659Z

## Code
```cpp
# Write your MySQL query statement below
SELECT user_id, COUNT(user_id) AS followers_count
FROM Followers
GROUP BY user_id
ORDER BY user_id ASC;
```