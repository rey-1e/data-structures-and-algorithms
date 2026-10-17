# Find Loyal Customers

- Platform: LeetCode
- URL: https://leetcode.com/problems/find-loyal-customers/submissions/2174774563/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 122 ms
- Memory: N/A
- Solved At: 2026-10-17T17:44:31.734Z

## Code
```cpp
# Write your MySQL query statement below
SELECT customer_id
FROM customer_transactions
GROUP BY customer_id
HAVING
COUNT(transaction_id) >= 3
AND
DATEDIFF(MAX(transaction_date), MIN(transaction_date)) >= 30
AND
(
    SUM(
        CASE
        WHEN transaction_type = 'refund' THEN 1
        ELSE 0
        END
    ) * 100.0
    / 
    COUNT(transaction_id)
) < 20;
```