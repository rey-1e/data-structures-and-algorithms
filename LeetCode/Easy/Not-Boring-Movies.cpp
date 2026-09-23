# Not Boring Movies

- Platform: LeetCode
- URL: https://leetcode.com/problems/not-boring-movies/submissions/2150566278/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 76 ms
- Memory: N/A
- Solved At: 2026-09-23T06:41:53.476Z

## Code
```cpp
# Write your MySQL query statement below
SELECT id, movie, description, rating
FROM Cinema
WHERE id % 2 != 0 AND description != 'boring'
ORDER by rating DESC;
```