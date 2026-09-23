# Average Time of Process per Machine

- Platform: LeetCode
- URL: https://leetcode.com/problems/average-time-of-process-per-machine/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 115 ms
- Memory: N/A
- Solved At: 2026-09-23T04:34:25.511Z

## Code
```cpp
# Write your MySQL query statement below
SELECT machine_id, ROUND(AVG(processing_time), 3) AS processing_time
FROM (
    SELECT machine_id,
           SUM(
            CASE
                WHEN activity_type = 'start' THEN -1 * timestamp
                WHEN activity_type = 'end' THEN timestamp
           ) AS processing_time
            END
           FROM Activity
           GROUP BY machine_id, process_id
) AS temporary
GROUP BY machine_id;
```