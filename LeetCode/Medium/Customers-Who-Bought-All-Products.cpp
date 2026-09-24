# Customers Who Bought All Products

- Platform: LeetCode
- URL: https://leetcode.com/problems/customers-who-bought-all-products/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 209 ms
- Memory: N/A
- Solved At: 2026-09-24T17:09:42.078Z

## Code
```cpp
# Write your MySQL query statement below
SELECT DISTINCT C.customer_id
FROM Customer AS C
LEFT JOIN Product AS P
ON C.product_key = P.product_key
GROUP BY C.customer_id
HAVING COUNT(DISTINCT C.product_key) = (SELECT COUNT(temp_P.product_key) FROM Product AS temp_P);
```