# Replace Employee ID With The Unique Identifier

- Platform: LeetCode
- URL: https://leetcode.com/problems/replace-employee-id-with-the-unique-identifier/submissions/2139368511/?utm_source=chatgpt.com
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 127 ms
- Memory: N/A
- Solved At: 2026-09-12T10:02:32.608Z

## Code
```cpp
# Write your MySQL query statement below
SELECT unique_id, name
FROM Employees as e
LEFT JOIN EmployeeUNI as u
ON e.id = u.id;
```