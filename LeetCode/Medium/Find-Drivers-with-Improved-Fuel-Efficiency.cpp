# Find Drivers with Improved Fuel Efficiency

- Platform: LeetCode
- URL: https://leetcode.com/problems/find-drivers-with-improved-fuel-efficiency/submissions/2172861695/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 190 ms
- Memory: N/A
- Solved At: 2026-10-15T08:49:36.857Z

## Code
```cpp
ROUND(AVG
       (
        CASE
        WHEN MONTH(T.trip_date) > 6 THEN (T.distance_km / T.
        fuel_consumed)
        END
       ), 2) AS second_half_avg,  
       ROUND(
       AVG
       (
        CASE
        WHEN MONTH(T.trip_date) > 6 THEN (T.distance_km / T.
        fuel_consumed)
        END
       )
       -
       AVG
       (
        CASE
        WHEN MONTH(T.trip_date) <= 6 THEN (T.distance_km / T.
        fuel_consumed)
        END
       ), 2) AS efficiency_improvement
FROM trips AS T
LEFT JOIN drivers AS D
ON T.driver_id = D.driver_id
GROUP BY T.driver_id
HAVING first_half_avg IS NOT NULL
       AND
       second_half_avg IS NOT NULL
       AND
       
       efficiency_improvement > 0
```