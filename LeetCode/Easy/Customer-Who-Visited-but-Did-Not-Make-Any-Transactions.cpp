# Customer Who Visited but Did Not Make Any Transactions

- Platform: LeetCode
- URL: https://leetcode.com/problems/customer-who-visited-but-did-not-make-any-transactions/submissions/2139879439/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 147 ms
- Memory: N/A
- Solved At: 2026-09-12T18:02:45.433Z

## Code
```cpp
# Write your MySQL query statement below
SELECT customer_id, COUNT(customer_id) as count_no_trans
FROM Visits
LEFT JOIN Transactions 
ON Visits.visit_id = Transactions.visit_id
WHERE transaction_id IS NULL
GROUP BY customer_id;
```