# Bank Account Summary II

- Platform: LeetCode
- URL: https://leetcode.com/problems/bank-account-summary-ii/submissions/2141440939/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 126 ms
- Memory: N/A
- Solved At: 2026-09-14T10:15:16.145Z

## Code
```cpp
# Write your MySQL query statement below
SELECT name AS NAME, SUM(amount) AS BALANCE
FROM Users 
LEFT JOIN Transactions 
ON Users.account = Transactions.account
GROUP BY name
HAVING SUM(amount) > 10000;
```