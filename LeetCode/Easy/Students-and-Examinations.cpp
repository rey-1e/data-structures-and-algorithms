# Students and Examinations

- Platform: LeetCode
- URL: https://leetcode.com/problems/students-and-examinations/submissions/2162586785/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 197 ms
- Memory: N/A
- Solved At: 2026-10-05T00:14:50.539Z

## Code
```cpp
# Write your MySQL query statement below
SELECT S.student_id, S.student_name, SS.subject_name,
      COUNT(
        E.student_id
      ) AS attended_exams
       
FROM Students AS S
CROSS JOIN Subjects AS SS
LEFT JOIN Examinations AS E
ON S.student_id = E.student_id 
   AND 
   SS.subject_name = E.subject_name
GROUP BY S.student_id, S.student_name, SS.subject_name
ORDER BY S.student_id, SS.subject_name;
```