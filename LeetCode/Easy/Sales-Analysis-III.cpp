# Sales Analysis III

- Platform: LeetCode
- URL: https://leetcode.com/problems/sales-analysis-iii/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 101 ms
- Memory: N/A
- Solved At: 2026-10-12T11:37:50.008Z

## Code
```cpp
# Write your MySQL query statement below
SELECT DISTINCT P.product_id, P.product_name
FROM Product AS P
LEFT JOIN Sales AS S
ON P.product_id = S.product_id
GROUP BY P.product_id
HAVING 
    MIN(S.sale_date) >= '2019-01-01'
    AND 
    MAX(S.sale_date) <= '2019-03-31'
;
```