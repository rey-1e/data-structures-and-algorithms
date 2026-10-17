# Find Students Who Improved

- Platform: LeetCode
- URL: https://leetcode.com/problems/find-students-who-improved/submissions/2174430053/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 111 ms
- Memory: N/A
- Solved At: 2026-10-17T09:01:45.872Z

## Code
```cpp
# Write your MySQL query statement below
WITH FIRST_SCORES AS
(
    SELECT student_id, subject, score
    FROM Scores S
    GROUP BY student_id, subject
),
LATEST_SCORES AS 
(
    SELECT student_id, subject, score
    FROM Scores S
    GROUP BY student_id, subject
)
-- use hit here; 
SELECT FS.student_id, FS.subject, FS.score AS first_score, LS.score AS 
FROM FIRST_SCORES AS FS
LEFT JOIN LATEST_SCORES AS LS
ON FS.student_id = LS.student_id
   AND
   FS.subject = LS.subject
WHERE LS.score IS NOT NULL
      AND
    WHERE exam_date = 
            (SELECT MIN(exam_date) FROM Scores SS
             WHERE S.student_id = SS.student_id
             AND S.subject = SS.subject)
    WHERE exam_date = 
            (SELECT MAX(exam_date) FROM Scores SS
             WHERE S.student_id = SS.student_id
             AND S.subject = SS.subject)
      LS.score > FS.score
      
latest_score
ORDER BY FS.student_id, FS.subject;
```