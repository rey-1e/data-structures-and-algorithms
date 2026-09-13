# Exchange Seats

- Platform: LeetCode
- URL: https://leetcode.com/problems/exchange-seats/submissions/2140988455/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 81 ms
- Memory: N/A
- Solved At: 2026-09-13T20:05:46.731Z

## Code
```cpp
# Write your MySQL query statement below
SELECT curr.id, 
    CASE                                                                   
        WHEN curr.id % 2 = 1 && next.student IS NOT NULL THEN next.student
        WHEN curr.id % 2 = 0 THEN prev.student
        ELSE curr.student
    END AS student
FROM Seat AS curr
LEFT JOIN Seat AS prev
ON curr.id - 1 = prev.id
LEFT JOIN Seat AS next
ON curr.id + 1 = next.id;
```