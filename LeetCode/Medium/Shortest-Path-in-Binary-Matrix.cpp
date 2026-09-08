# Shortest Path in Binary Matrix

- Platform: LeetCode
- URL: https://leetcode.com/problems/shortest-path-in-binary-matrix/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 26.34
MB
- Solved At: 2026-09-08T08:33:03.383Z

## Code
```cpp
vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
        dist[0][0] = 1; 
        queue<pair<int, pair<int, int>>> q; 
        
        if(grid[n-1][n-1] == 1) return -1; 
        q.push({1, {0, 0}});
        while(!q.empty()) {
            auto curr = q.front();
        }
            q.pop();
            int distance = curr.first;
            int row = curr.second.first;
            int col = curr.second.second;
            for(int i = 0; i < 8; i++) {
                int R = row + delRow[i]; 
            }
        int delRow[] = {-1, -1, -1,  0, 0,  1, 1, 1};
        int delCol[] = {-1,  0,  1, -1, 1, -1, 0, 1};
                int C = col + delCol[i]; 
                if(R >= 0 && C >= 0 && R < n && C < n
                   && grid[R][C] == 0) {
                    if(distance + 1 < dist[R][C]) {
                   }
                        dist[R][C] = distance + 1; 
                    }
                        q.push({dist[R][C], {R, C}});
        if(dist[n-1][n-1] == INT_MAX) return -1;
        return dist[n-1][n-1];
        if(grid[0][0] == 1) return -1; 
        
        int n = grid.size();
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
class Solution {
```