# Customer Placing the Largest Number of Orders

- Platform: LeetCode
- URL: https://leetcode.com/problems/customer-placing-the-largest-number-of-orders/submissions/2170829699/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 73 ms
- Memory: N/A
- Solved At: 2026-10-13T05:17:22.201Z

## Code
```cpp
# Write your MySQL query statement below
SELECT customer_number
FROM Orders
GROUP BY customer_number
ORDER BY COUNT(order_number) DESC
LIMIT 1;
```