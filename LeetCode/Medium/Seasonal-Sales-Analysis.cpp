# Seasonal Sales Analysis

- Platform: LeetCode
- URL: https://leetcode.com/problems/seasonal-sales-analysis/submissions/2170844505/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 120 ms
- Memory: N/A
- Solved At: 2026-10-13T05:34:09.368Z

## Code
```cpp
WHERE MONTH(sale_date) = '03' OR
      MONTH(sale_date) = '04' OR
      MONTH(sale_date) = '05'
GROUP BY P.category
ORDER BY total_quantity DESC, total_revenue DESC, category ASC
LIMIT 1)
(SELECT 'Summer' AS season, P.category AS category, SUM(S.quantity) AS 
FROM sales AS S
UNION
LEFT JOIN products AS P
ON S.product_id = P.product_id
WHERE MONTH(sale_date) = '06' OR
      MONTH(sale_date) = '07' OR
      MONTH(sale_date) = '08'
total_quantity, SUM(S.quantity * S.price) AS total_revenue
GROUP BY P.category
ORDER BY total_quantity DESC, total_revenue DESC, category ASC
LIMIT 1)
UNION
(SELECT 'Winter' AS season, P.category AS category, SUM(S.quantity) AS 
total_quantity, SUM(S.quantity * S.price) AS total_revenue
FROM sales AS S
LEFT JOIN products AS P
ON S.product_id = P.product_id
WHERE MONTH(sale_date) = '12' OR
      MONTH(sale_date) = '01' OR
      MONTH(sale_date) = '02'
GROUP BY P.category
ORDER BY total_quantity DESC, total_revenue DESC, category ASC
LIMIT 1);
```