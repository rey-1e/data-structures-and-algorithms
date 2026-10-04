# Movie Rating

- Platform: LeetCode
- URL: https://leetcode.com/problems/movie-rating/submissions/2161956152/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 205 ms
- Memory: N/A
- Solved At: 2026-10-04T09:43:43.885Z

## Code
```cpp
# Write your MySQL query statement below
(SELECT U.name AS results
FROM Users AS U
INNER JOIN MovieRating AS MR
ON U.user_id = MR.user_id
GROUP BY U.user_id
ORDER BY COUNT(movie_id) DESC, U.name
LIMIT 1)
UNION ALL
(SELECT M.title AS results
FROM Movies AS M
INNER JOIN MovieRating AS MR
ON M.movie_id = MR.movie_id
WHERE MONTH(MR.created_at) = 2 AND YEAR(MR.created_at) = 2020
GROUP BY M.movie_id
ORDER BY AVG(MR.rating) DESC, M.title
LIMIT 1);
```