# Last Person to Fit in the Bus

- Platform: LeetCode
- URL: https://leetcode.com/problems/last-person-to-fit-in-the-bus/submissions/2152983765/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 63 ms
- Memory: N/A
- Solved At: 2026-09-25T12:56:03.435Z

## Code
```cpp
# Write your MySQL query statement below
SELECT person_name
FROM 
    (
        SELECT *,
            SUM(weight) OVER(ORDER BY turn ASC) AS total_sum
        FROM Queue
    ) AS tb1
WHERE total_sum <= 1000
ORDER BY total_sum DESC
LIMIT 1;
```