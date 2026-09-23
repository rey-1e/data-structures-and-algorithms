# Queries Quality and Percentage

- Platform: LeetCode
- URL: https://leetcode.com/problems/queries-quality-and-percentage/submissions/2150717061/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 88 ms
- Memory: N/A
- Solved At: 2026-09-23T09:32:31.674Z

## Code
```cpp
# Write your MySQL query statement below
SELECT query_name, 
       ROUND(AVG(rating / position), 2) AS quality,
       ROUND(
        COUNT(
            CASE
            WHEN rating < 3 THEN 1
            END
        ) * 100
        /
        COUNT(*)
       , 2) AS poor_query_percentage
    
FROM Queries
GROUP BY query_name;
```