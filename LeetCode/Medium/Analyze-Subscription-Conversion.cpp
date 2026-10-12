# Analyze Subscription Conversion

- Platform: LeetCode
- URL: https://leetcode.com/problems/analyze-subscription-conversion/submissions/2170153757/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 112 ms
- Memory: N/A
- Solved At: 2026-10-12T12:04:09.118Z

## Code
```cpp
# Write your MySQL query statement below
SELECT DISTINCT user_id,
                ROUND(AVG(
                    CASE
                        WHEN activity_type = 'free_trial' THEN 
                        activity_duration
                    END
                   ), 2) AS trial_avg_duration,
FROM UserActivity
                ROUND(AVG(
                    CASE
                   ), 2) AS paid_avg_duration
                        WHEN activity_type = 'paid' THEN
                        activity_duration
                    END
GROUP BY user_id
HAVING 
      trial_avg_duration IS NOT NULL
      AND
      paid_avg_duration IS NOT NULL
      
ORDER BY user_id ASC;
```