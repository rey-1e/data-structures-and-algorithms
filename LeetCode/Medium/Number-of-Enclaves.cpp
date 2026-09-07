# Number of Enclaves

- Platform: LeetCode
- URL: https://leetcode.com/problems/number-of-enclaves/submissions/2133836860/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 36.06
MB
- Solved At: 2026-09-07T11:47:58.967Z

## Code
```cpp
int numEnclaves(vector<vector<int>>& grid) {
        
        int n = grid.size(); 
        vector<vector<int>> visited(n, vector<int>(m, 0));
        int m = grid[0].size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
    }
        }
            for(int i = 0; i < 4; i++) {
                int R = row + delRow[i]; 
            }
                int C = col + delCol[i];
                if(R >= 0 && C >= 0 && R < grid.size() && C < grid[0].size() 
                   && grid[R][C] == 1 && visited[R][C] == 0) {
                    visited[R][C] = 1; 
                   }
                    q.push({R, C});
        return; 
            int col = curr.second;
            auto curr = q.front();
            int row = curr.first;
        while(!q.empty()) {
        int delRow[] = {0, -1, 0, +1};
        int delCol[] = {-1, 0, +1, 0};
        queue<pair<int, int>> q; 
        q.push({i, j});
        visited[i][j] = 1; 
    void bfs(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& visited) {
public:
class Solution {
            q.pop();
```