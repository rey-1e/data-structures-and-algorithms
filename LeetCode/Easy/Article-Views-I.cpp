# Article Views I

- Platform: LeetCode
- URL: https://leetcode.com/problems/article-views-i/submissions/2139839610/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 74 ms
- Memory: N/A
- Solved At: 2026-09-12T17:26:18.293Z

## Code
```cpp
# Write your MySQL query statement below
SELECT DISTINCT author_id as id
FROM Views
WHERE author_id = viewer_id
ORDER BY author_id;
```