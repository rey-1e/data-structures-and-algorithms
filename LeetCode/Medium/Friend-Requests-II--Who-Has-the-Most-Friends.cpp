# Friend Requests II: Who Has the Most Friends

- Platform: LeetCode
- URL: https://leetcode.com/problems/friend-requests-ii-who-has-the-most-friends/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 86 ms
- Memory: N/A
- Solved At: 2026-10-04T11:10:51.633Z

## Code
```cpp
# Write your MySQL query statement below
SELECT first AS id, COUNT(second) AS num
FROM 
    (
        SELECT requester_id AS first, requester_id AS second
        FROM RequestAccepted
        UNION ALL
        SELECT accepter_id AS first, requester_id AS second
        FROM RequestAccepted
    ) AS temp
GROUP BY first
ORDER BY COUNT(second) DESC
LIMIT 1;
```