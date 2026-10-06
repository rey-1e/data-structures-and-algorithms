# List the Products Ordered in a Period

- Platform: LeetCode
- URL: https://leetcode.com/problems/list-the-products-ordered-in-a-period/submissions/2164212260/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 124 ms
- Memory: N/A
- Solved At: 2026-10-06T12:28:24.486Z

## Code
```cpp
# Write your MySQL query statement below
SELECT P.product_name AS product_name, SUM(O.unit) AS unit
FROM Orders AS O
INNER JOIN Products AS P
ON O.product_id = P.product_id
WHERE MONTH(O.order_date) = 2 AND YEAR(O.order_date) = 2020
GROUP BY O.product_id
HAVING SUM(O.unit) >= 100;
```