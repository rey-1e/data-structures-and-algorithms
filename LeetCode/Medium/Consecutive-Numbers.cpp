# Consecutive Numbers

- Platform: LeetCode
- URL: https://leetcode.com/problems/consecutive-numbers/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 70 ms
- Memory: N/A
- Solved At: 2026-09-25T10:01:06.125Z

## Code
```cpp
# Write your MySQL query statement below
SELECT DISTINCT curr.num AS ConsecutiveNums
FROM Logs AS curr
INNER JOIN Logs AS prev
ON curr.id = prev.id + 1
INNER JOIN Logs AS next
ON curr.id = next.id - 1
WHERE curr.num = next.num AND next.num = prev.num;
```