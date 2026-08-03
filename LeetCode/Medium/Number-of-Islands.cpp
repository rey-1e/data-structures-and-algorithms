# Number of Islands

- Platform: LeetCode
- URL: https://leetcode.com/problems/number-of-islands/description/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-03T21:07:06.786Z

## Code
```cpp
class Solution {
public:
    void traverse(int i, int j, vector<vector<char>>& grid) {
        // left, right, up, down.
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int, int>> q;
        q.push({i, j});
        grid[i][j] = '#';
        while (!q.empty()) {
            auto curr = q.front();
            q.pop();
            j = curr.second;
            i = curr.first;
            if (j + 1 < n && grid[i][j + 1] == '1') {
                grid[i][j + 1] = '#';
                q.push({i, j + 1});
            }
            if (i + 1 < m && grid[i + 1][j] == '1') {
                grid[i + 1][j] = '#';
                q.push({i + 1, j});
            }
            if (j - 1 >= 0 && grid[i][j - 1] == '1') {
                grid[i][j - 1] = '#';
                q.push({i, j - 1});
            }
            if (i - 1 >= 0 && grid[i - 1][j] == '1') {
                grid[i - 1][j] = '#';
                q.push({i - 1, j});
            }
        }
```