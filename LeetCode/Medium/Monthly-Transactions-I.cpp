# Monthly Transactions I

- Platform: LeetCode
- URL: https://leetcode.com/problems/monthly-transactions-i/submissions/2150389661/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 80 ms
- Memory: N/A
- Solved At: 2026-09-23T03:53:53.800Z

## Code
```cpp
# Write your MySQL query statement below
SELECT SUBSTRING(trans_date, 1, 7) AS month,
       country, 
       COUNT(id) AS trans_count, 
       COUNT(
        CASE 
            WHEN state = 'approved' THEN id
        END
       ) AS approved_count,
       SUM(amount) AS trans_total_amount,
       SUM(
        CASE
            WHEN state = 'approved' THEN amount
            ELSE 0
        END
       ) AS approved_total_amount
FROM Transactions
GROUP BY month, country;
```