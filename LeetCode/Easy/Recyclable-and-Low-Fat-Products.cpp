# Recyclable and Low Fat Products

- Platform: LeetCode
- URL: https://leetcode.com/problems/recyclable-and-low-fat-products/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 67 ms
- Memory: N/A
- Solved At: 2026-09-12T09:22:40.096Z

## Code
```cpp
# Write your MySQL query statement below
SELECT product_id 
FROM Products
WHERE low_fats = 'Y' AND recyclable = 'Y';
```