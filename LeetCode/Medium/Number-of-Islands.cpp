# Number of Islands

- Platform: LeetCode
- URL: https://leetcode.com/problems/number-of-islands/submissions/2133915286/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 24.31
MB
- Solved At: 2026-09-07T13:20:43.159Z

## Code
```cpp
int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0; 
        vector<vector<int>> visited(n, vector<int>(m, 0)); 
        for(int i= 0; i < n ;i++) {
            for(int j = 0; j < m; j++) {
                if(visited[i][j] == 0 && grid[i][j] == '1') {
    }
        }
            q.pop();
            for(int i= 0; i < 4; i++) {
                int R = row + delRow[i]; 
            }
                int C = col + delCol[i]; 
                if(R >= 0 && C >= 0 && R < grid.size() && C < grid[0].size()
                   && visited[R][C] == 0 && grid[R][C] == '1') {
                    //this is a part of an island;
                }
                    visited[R][C] = 1; 
                    q.push({R, C});
        return; 
            int col = curr.second;
            int row = curr.first;
            auto curr = q.front();
        while(!q.empty()) {
        int delCol[] = {-1, 0, +1, 0};
        int delRow[] = {0, -1, 0, +1};
        visited[i][j] = 1; 
        q.push({i, j});
        queue<pair<int, int>> q; 
public:
    void bfs(int i, int j, vector<vector<char>>& grid, vector<vector<int>>& visited) {
        
class Solution {
```