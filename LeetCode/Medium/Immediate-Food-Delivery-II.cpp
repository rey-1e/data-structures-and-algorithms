# Immediate Food Delivery II

- Platform: LeetCode
- URL: https://leetcode.com/problems/immediate-food-delivery-ii/submissions/2163640440/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 67 ms
- Memory: N/A
- Solved At: 2026-10-05T23:13:46.624Z

## Code
```cpp
# Write your MySQL query statement below
SELECT 
    ROUND(COUNT(
        CASE
        WHEN order_date = customer_pref_delivery_date THEN 1
        END
    ) * 100
    /
    COUNT(*), 2) AS immediate_percentage
FROM 
    (
        SELECT *, 
        ROW_NUMBER() OVER(PARTITION BY customer_id ORDER BY 
        order_date ASC)  AS RNK
        FROM Delivery
    ) AS TEMPORARY_TABLE
WHERE RNK = 1;
```