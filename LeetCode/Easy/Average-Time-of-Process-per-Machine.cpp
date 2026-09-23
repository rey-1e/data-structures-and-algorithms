# Average Time of Process per Machine

- Platform: LeetCode
- URL: https://leetcode.com/problems/average-time-of-process-per-machine/submissions/2150416623/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 166 ms
- Memory: N/A
- Solved At: 2026-09-23T04:21:28.861Z

## Code
```cpp
# Write your MySQL query statement below
SELECT machine_id,
    ROUND(SUM(
        CASE 
            WHEN activity_type = 'start' THEN -1 * timestamp
            WHEN activity_type = 'end' THEN timestamp
        END
        ) / (COUNT(activity_type) / 2), 3) AS processing_time
FROM Activity
GROUP BY machine_id;
```