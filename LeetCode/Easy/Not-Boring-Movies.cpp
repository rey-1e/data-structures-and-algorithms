# Not Boring Movies

- Platform: LeetCode
- URL: https://leetcode.com/problems/not-boring-movies/submissions/2139352367/?utm_source=chatgpt.com
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 80 ms
- Memory: N/A
- Solved At: 2026-09-12T09:41:55.286Z

## Code
```cpp
# Write your MySQL query statement below
SELECT id, movie, description, rating
FROM Cinema
WHERE id % 2 != 0 AND description != "boring"
ORDER BY rating DESC;
```