# Top Travellers

- Platform: LeetCode
- URL: https://leetcode.com/problems/top-travellers/submissions/2170139593/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 122 ms
- Memory: N/A
- Solved At: 2026-10-12T11:42:18.962Z

## Code
```cpp
# Write your MySQL query statement below
SELECT U.name AS name, SUM(COALESCE(R.distance, 0)) AS 
FROM Users AS U
LEFT JOIN Rides AS R
ON U.id = R.user_id
GROUP BY U.id
travelled_distance
ORDER BY travelled_distance DESC, U.name ASC;
```