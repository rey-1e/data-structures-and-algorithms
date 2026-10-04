# Restaurant Growth

- Platform: LeetCode
- URL: https://leetcode.com/problems/restaurant-growth/submissions/2162013441/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 71 ms
- Memory: N/A
- Solved At: 2026-10-04T10:58:07.774Z

## Code
```cpp
# Write your MySQL query statement below
SELECT visited_on, AMT AS amount, AVG_AMT AS average_amount
FROM 
    (
        SELECT 
            ROW_NUMBER() OVER(ORDER BY visited_on ASC) AS RNK,
            visited_on, 
            ROUND(SUM(amount) OVER 
                      (
                        ORDER BY visited_on
                        ROWS BETWEEN 6 PRECEDING AND CURRENT ROW
                      ), 2) AS AMT,
            ROUND(AVG(amount) OVER
                      (
                        ORDER BY visited_on
                        ROWS BETWEEN 6 PRECEDING AND CURRENT ROW
                      ), 2) AS AVG_AMT
            FROM (SELECT customer_id, name, visited_on, SUM(amount) AS amount 
    ) AS TEMPORARY_TABLE
            FROM Customer GROUP BY visited_on) AS TEMP_INNER
WHERE RNK > 6;
```