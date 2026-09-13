# DNA Pattern Recognition

- Platform: LeetCode
- URL: https://leetcode.com/problems/dna-pattern-recognition/submissions/2140503464/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 69 ms
- Memory: N/A
- Solved At: 2026-09-13T10:27:55.261Z

## Code
```cpp
# Write your MySQL query statement below
SELECT sample_id, dna_sequence, species, 
CASE
    WHEN (dna_sequence LIKE ('ATG%')) THEN 1 
    ELSE 0
    END
AS has_start, 
CASE
    WHEN (dna_sequence LIKE ('%TAA') OR dna_sequence LIKE ('%TAG') OR dna_sequence LIKE ('%TGA')) THEN 1
    ELSE 0
    END
AS has_stop,
CASE 
    WHEN (dna_sequence LIKE ('%ATAT%')) THEN 1
    ELSE 0
    END
AS has_atat, 
CASE 
    WHEN (dna_sequence LIKE ('%GGG%')) THEN 1
    ELSE 0
    END
AS has_ggg
FROM Samples;
```