# Tree Node

- Platform: LeetCode
- URL: https://leetcode.com/problems/tree-node/submissions/2140975489/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 93 ms
- Memory: N/A
- Solved At: 2026-09-13T19:43:47.122Z

## Code
```cpp
# Write your MySQL query statement below
SELECT id, 
CASE
    WHEN p_id IS NULL THEN 'Root'
END AS type
    WHEN id IN (SELECT p_id FROM Tree) THEN 'Inner'
    ELSE 'Leaf'
FROM Tree;
```