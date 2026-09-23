# Last Person to Fit in the Bus

- Platform: LeetCode
- URL: https://leetcode.com/problems/last-person-to-fit-in-the-bus/submissions/2150401281/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 75 ms
- Memory: N/A
- Solved At: 2026-09-23T04:06:16.934Z

## Code
```cpp
# Write your MySQL query statement below
SELECT person_name
FROM (
    SELECT person_id,
           person_name, 
           weight, 
           turn, 
           SUM(weight) OVER(ORDER BY turn) AS rolling_total
           
           FROM Queue
    ) AS tb
WHERE rolling_total <= 1000
ORDER BY turn DESC
LIMIT 1;
```