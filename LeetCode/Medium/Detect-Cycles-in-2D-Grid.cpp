# Detect Cycles in 2D Grid

- Platform: LeetCode
- URL: https://leetcode.com/problems/detect-cycles-in-2d-grid/description/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-13T13:13:22.356Z

## Code
```cpp
class Solution {
public:
    bool bfs(char c, int i, int j, vector<vector<char>>& grid, 
    vector<vector<int>>& visited) {
    int row[] = {0, -1, 0, +1};
    int col[] = {-1, 0, +1, 0};    
        visited[i][j] = 1; 
        queue<pair<pair<int, int>, pair<int, int>>> q; 
        q.push({{i, j }, {-1, -1}});
        while(!q.empty()) {
            auto curr = q.front().first;
            auto parent = q.front().second;
            q.pop();
            for(int i = 0; i < 4; i++) {
                int currRow = curr.first + row[i];
                int currCol = curr.second + col[i];
                if(currRow >= 0 && currCol >= 0 && currRow < 
                grid.size() && currCol < grid[0].size() && grid
                [currRow][currCol] == c) {
                    pair<int, int> temp = {currRow, currCol};
                    if(visited[currRow][currCol] == 0) {
                        //it's fine; 
                        q.push({{currRow, currCol}, {curr.
                        first, curr.second}});
                        visited[currRow][currCol] = 1;
```