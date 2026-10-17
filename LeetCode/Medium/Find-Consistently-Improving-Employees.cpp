# Find Consistently Improving Employees

- Platform: LeetCode
- URL: https://leetcode.com/problems/find-consistently-improving-employees/submissions/2174887538/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 136 ms
- Memory: N/A
- Solved At: 2026-10-17T20:52:37.469Z

## Code
```cpp
# Write your MySQL query statement below
WITH adv_reviews AS 
(
    SELECT employee_id, 
            MAX(CASE
                WHEN rnk = 3 THEN rating
            END) AS one, 
            MAX(CASE
                WHEN rnk = 2 THEN rating
            END) AS two,
            MAX(CASE
                WHEN rnk = 1 THEN rating
            END) AS three
    FROM 
    (
    SELECT employee_id, rating, 
    ROW_NUMBER() OVER(PARTITION BY employee_id 
                    ORDER BY review_date DESC) AS rnk
    FROM performance_reviews
    ) AS temp
    GROUP BY employee_id
)
SELECT E.employee_id AS employee_id, E.name AS name, (AR.three - AR.one) AS 
improvement_score
FROM adv_reviews AS AR
LEFT JOIN employees AS E
ON AR.employee_id = E.employee_id
WHERE
    AR.one IS NOT NULL
    AND
    AR.one < AR.two AND AR.two < AR.three
ORDER BY improvement_score DESC, name ASC;
```