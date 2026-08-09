# Number of Enclaves

- Platform: LeetCode
- URL: https://leetcode.com/problems/number-of-enclaves/submissions/2100238897/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 28.83
MB
- Solved At: 2026-08-09T10:51:05.333Z

## Code
```cpp
int delCol[] = {-1, 0, +1, 0};
        while(!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int i = 0; i < 4; i++) {
                int R = row + delRow[i];
                int C = col + delCol[i];
                if(R >= 0 && C >= 0 && R < n && C < m && grid[R][C] == 1) {
                    q.push({R, C});
        int delRow[] = {0, -1, 0, +1};
                    grid[R][C] = '#';
        }
            }
                    }
                }
                        grid[i][j] = '#';
                        q.push({i, j});
                    if(grid[i][j] == 1) {
                    //call bfs if it's a one & convert them to '#';
                if(i == 0 || i == n - 1 || j == 0 || j == m - 1) {
        int n= grid.size(); 
        int m = grid[0].size();
        queue<pair<int, int>> q; 
 
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
    int numEnclaves(vector<vector<int>>& grid) {
        
class Solution {
public:
```