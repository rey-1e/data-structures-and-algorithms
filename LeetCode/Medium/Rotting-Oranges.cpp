# Rotting Oranges

- Platform: LeetCode
- URL: https://leetcode.com/problems/rotting-oranges/description/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-04T21:10:55.910Z

## Code
```cpp
class Solution {
public:
    int bfs(vector<vector<int>>& grid, queue<pair<int, int>>& q) {
        int count = 0;
        while (!q.empty()) {
            int currSize = q.size();
            int rows[4] = {0, -1, 0, +1};
            int cols[4] = {-1, 0, +1, 0};
            bool changeOccurred = false;
            for (int temp = 0; temp < currSize; temp++) {
                auto curr = q.front();
                q.pop();
                for (int i = 0; i < 4; i++) {
                    int CR = curr.first + rows[i];
                    int CC = curr.second + cols[i];
                    if (CR < 0 || CC < 0 || CR >= grid.size() ||
                        CC >= grid[0].size()) {
                        continue;
                    } else if (grid[CR][CC] == 1) {
                        changeOccurred = true;
                    }
                    if (grid[CR][CC] == 1) {
                        q.push({CR, CC});
                        grid[CR][CC] = 2;
                    }
                }
            }
            if (changeOccurred) {
                count++;
            } else
```