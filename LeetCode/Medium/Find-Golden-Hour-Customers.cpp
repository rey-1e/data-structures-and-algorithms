# Find Golden Hour Customers

- Platform: LeetCode
- URL: https://leetcode.com/problems/find-golden-hour-customers/submissions/2174461008/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 123 ms
- Memory: N/A
- Solved At: 2026-10-17T09:57:32.272Z

## Code
```cpp
OR TIME(order_timestamp) BETWEEN '18:00' AND '21:00'
                    THEN 1
                END
            ) * 100
            /
            COUNT(order_id)
        , 0) AS peak_hour_percentage,
        ROUND(AVG(order_rating), 2) AS average_rating,
        (
            COUNT(
                CASE
                    WHEN order_rating IS NOT NULL THEN 1
                END
            ) * 100
            /
            COUNT(order_id)
        ) AS ptg_order_rating
    FROM restaurant_orders
    GROUP BY customer_id
)
SELECT
    customer_id,
    total_orders,
    peak_hour_percentage,
    average_rating
FROM ENTIRE_TABLE
WHERE
    ptg_order_rating >= 50
    AND peak_hour_percentage >= 60
    AND total_orders >= 3
    AND average_rating >= 4.0
ORDER BY average_rating DESC, customer_id DESC;
```