# Product Sales Analysis I

- Platform: LeetCode
- URL: https://leetcode.com/problems/product-sales-analysis-i/submissions/2139356663/?utm_source=chatgpt.com
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 109 ms
- Memory: N/A
- Solved At: 2026-09-12T09:47:26.515Z

## Code
```cpp
# Write your MySQL query statement below
SELECT product_name, year, price
FROM Sales
LEFT JOIN Product
ON Sales.product_id = Product.product_id;
```