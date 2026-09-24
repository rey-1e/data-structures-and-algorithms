# Classes With at Least 5 Students

- Platform: LeetCode
- URL: https://leetcode.com/problems/classes-with-at-least-5-students/submissions/2152223330/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 97 ms
- Memory: N/A
- Solved At: 2026-09-24T16:49:17.087Z

## Code
```cpp
# Write your MySQL query statement below
SELECT class
FROM Courses
GROUP BY class
HAVING COUNT(student) >= 5;
```