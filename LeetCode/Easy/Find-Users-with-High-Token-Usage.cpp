# Find Users with High Token Usage

- Platform: LeetCode
- URL: https://leetcode.com/problems/find-users-with-high-token-usage/submissions/2165404087/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 115 ms
- Memory: N/A
- Solved At: 2026-10-07T14:54:41.174Z

## Code
```cpp
# Write your MySQL query statement below
SELECT user_id, COUNT(prompt) AS prompt_count, ROUND(AVG(tokens), 2) AS avg_tokens
FROM prompts
GROUP BY user_id
HAVING prompt_count >= 3
       AND
       MAX(tokens) > avg_tokens
ORDER BY avg_tokens DESC, user_id;
```