# Odd and Even Transactions

- Platform: LeetCode
- URL: https://leetcode.com/problems/odd-and-even-transactions/submissions/2165573906/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 75 ms
- Memory: N/A
- Solved At: 2026-10-07T17:27:07.833Z

## Code
```cpp
# Write your MySQL query statement below
SELECT transaction_date,
       SUM(
        CASE
            WHEN amount % 2 = 1 THEN amount
            ELSE 0
        END
       ) AS odd_sum, 
       SUM(
        CASE
            WHEN amount % 2 = 0 THEN amount
            ELSE 0
        END
       ) AS even_sum
FROM transactions
GROUP BY transaction_date
ORDER BY transaction_date ASC;
```