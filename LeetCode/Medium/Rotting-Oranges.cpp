# Rotting Oranges

- Platform: LeetCode
- URL: https://leetcode.com/problems/rotting-oranges/submissions/2093996978/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 0.00
MB
- Solved At: 2026-08-04T13:02:03.382Z

## Code
```cpp
if (changeOccurred) {
                count++;
            } else
                    if (grid[CR][CC] == 1) {
                        q.push({CR, CC});
                        grid[CR][CC] = 2;
                    }
                }
            }
                    if (CR < 0 || CC < 0 || CR >= grid.size() ||
                        CC >= grid[0].size()) {
                        continue;
                    } else if (grid[CR][CC] == 1) {
                        changeOccurred = true;
                    }
                for (int i = 0; i < 4; i++) {
                    int CR = curr.first + rows[i];
                    int CC = curr.second + cols[i];
            bool changeOccurred = false;
            for (int temp = 0; temp < currSize; temp++) {
                auto curr = q.front();
                q.pop();
class Solution {
public:
    int bfs(vector<vector<int>>& grid, queue<pair<int, int>>& q) {
        int count = 0;
        while (!q.empty()) {
            int currSize = q.size();
            int rows[4] = {0, -1, 0, +1};
            int cols[4] = {-1, 0, +1, 0};
```