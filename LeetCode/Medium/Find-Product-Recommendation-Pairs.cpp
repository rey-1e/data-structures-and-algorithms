# Find Product Recommendation Pairs

- Platform: LeetCode
- URL: https://leetcode.com/problems/find-product-recommendation-pairs/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 156 ms
- Memory: N/A
- Solved At: 2026-10-15T07:42:09.327Z

## Code
```cpp
# Write your MySQL query statement below
SELECT p1.product_id AS product1_id, 
       COUNT(DISTINCT p1.user_id) AS customer_count
FROM ProductPurchases AS p1
LEFT JOIN ProductPurchases AS p2
ON p1.user_id = p2.user_id
LEFT JOIN ProductInfo AS pi1
ON p1.product_id = pi1.product_id
LEFT JOIN ProductInfo AS pi2
ON p2.product_id = pi2.product_id
WHERE p1.product_id != p2.product_id AND p1.product_id < p2.product_id
GROUP BY p1.product_id, p2.product_id
       p2.product_id AS product2_id, 
       pi1.category AS product1_category, 
       pi2.category AS product2_category,
HAVING customer_count >= 3
ORDER BY customer_count DESC, product1_id ASC, product2_id ASC;
```