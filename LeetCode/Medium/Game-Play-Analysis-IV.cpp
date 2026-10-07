# Game Play Analysis IV

- Platform: LeetCode
- URL: https://leetcode.com/problems/game-play-analysis-iv/submissions/2165042986/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 85 ms
- Memory: N/A
- Solved At: 2026-10-07T07:28:20.326Z

## Code
```cpp
SELECT ROUND(
    COUNT(
        CASE
            WHEN DATE_ADD(event_date, INTERVAL 1 DAY) IN
                (
                    SELECT event_date
                    FROM Activity A2
                    WHERE A1.player_id = A2.player_id
                )
            THEN 1
        END
    ) / COUNT(player_id),
    2
) AS fraction
FROM (
    SELECT *,
        ROW_NUMBER() OVER (
            PARTITION BY player_id
            ORDER BY event_date
        ) AS RNK
    FROM Activity
) AS A1
WHERE RNK = 1;
```