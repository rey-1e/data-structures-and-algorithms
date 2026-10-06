# Delete Duplicate Emails

- Platform: LeetCode
- URL: https://leetcode.com/problems/delete-duplicate-emails/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 75 ms
- Memory: N/A
- Solved At: 2026-10-06T10:50:01.157Z

## Code
```cpp
# Write your MySQL query statement below
WITH UNWANTED_IDS AS
WHERE RNK != 1
DELETE
FROM Person
WHERE id IN (SELECT id FROM UNWANTED_IDS);
FROM 
    (
        SELECT *, 
    ) AS temp
        ROW_NUMBER() OVER(PARTITION BY email ORDER BY id ASC) AS RNK
(
SELECT id
)
        FROM Person
;
```