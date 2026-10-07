# Trips and Users

- Platform: LeetCode
- URL: https://leetcode.com/problems/trips-and-users/description/
- Difficulty: Hard
- Language: C++
- Status: Accepted
- Runtime: 124 ms
- Memory: N/A
- Solved At: 2026-10-07T06:54:51.379Z

## Code
```cpp
# Write your MySQL query statement below
SELECT T.request_at AS Day,
    ROUND(
        COUNT(
            CASE
                WHEN T.status = 'cancelled_by_driver'
                  OR T.status = 'cancelled_by_client'
                THEN 1
            END
        ) / COUNT(T.status),
        2
    ) AS 'Cancellation Rate'
FROM Trips AS T
INNER JOIN Users AS C
    ON C.users_id = T.client_id
INNER JOIN Users AS D
    ON D.users_id = T.driver_id
WHERE C.banned = 'No'
  AND D.banned = 'No'
  AND T.request_at BETWEEN '2013-10-01' AND '2013-10-03'
GROUP BY T.request_at;
```