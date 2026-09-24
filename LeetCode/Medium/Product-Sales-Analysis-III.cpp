# Product Sales Analysis III

- Platform: LeetCode
- URL: https://leetcode.com/problems/product-sales-analysis-iii/submissions/2152221112/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 169 ms
- Memory: N/A
- Solved At: 2026-09-24T16:47:27.046Z

## Code
```cpp
# Write your MySQL query statement below
SELECT product_id, year AS first_year, quantity, price
FROM 
    (
        SELECT *, 
               DENSE_RANK() OVER(PARTITION BY product_id ORDER BY year ASC) AS rnk
        FROM Sales
    ) AS derived_table
    WHERE rnk = 1;
```