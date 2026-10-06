# Patients With a Condition

- Platform: LeetCode
- URL: https://leetcode.com/problems/patients-with-a-condition/?envType=study-plan-v2&envId=top-sql-50
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 158 ms
- Memory: N/A
- Solved At: 2026-10-06T09:39:25.826Z

## Code
```cpp
# Write your MySQL query statement below
SELECT patient_id, patient_name, conditions
FROM Patients
WHERE conditions LIKE ('DIAB1%') OR conditions LIKE ('% DIAB1%');
```