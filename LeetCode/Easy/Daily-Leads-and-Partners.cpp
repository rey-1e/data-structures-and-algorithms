# Daily Leads and Partners

- Platform: LeetCode
- URL: https://leetcode.com/problems/daily-leads-and-partners/submissions/2140375266/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 92 ms
- Memory: N/A
- Solved At: 2026-09-13T07:27:11.888Z

## Code
```cpp
# Write your MySQL query statement below
SELECT date_id, make_name, 
    COUNT(DISTINCT lead_id) as unique_leads, 
    COUNT(DISTINCT partner_id) as unique_partners
FROM DailySales
GROUP BY date_id, make_name;
```