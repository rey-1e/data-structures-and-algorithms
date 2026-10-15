# Find COVID Recovery Patients

- Platform: LeetCode
- URL: https://leetcode.com/problems/find-covid-recovery-patients/submissions/2172847729/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 280 ms
- Memory: N/A
- Solved At: 2026-10-15T08:26:24.992Z

## Code
```cpp
# Write your MySQL query statement below
SELECT CT.patient_id AS patient_id, 
       P.patient_name AS patient_name, 
       P.age,
       DATEDIFF(MIN(CASE WHEN result = 'negative' AND
           test_date > (SELECT MIN(CASE WHEN result = 
           'positive' THEN test_date END) FROM covid_tests 
           WHERE patient_id = CT.patient_id)
            THEN test_date END)
       ,
       MIN(CASE WHEN result = 'positive' THEN test_date END))
       AS recovery_time
FROM covid_tests AS CT
LEFT JOIN patients AS P
ON CT.patient_id = P.patient_id
GROUP BY patient_id
HAVING recovery_time IS NOT NULL
ORDER BY recovery_time ASC, patient_name ASC;
```