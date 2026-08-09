# Replace O's with X's | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/replace-os-with-xs0052/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-09T08:36:30.283Z

## Code
```cpp
private: 
    void bfs(int i, int j, vector<vector<char>>& grid) {
        
        grid[i][j] = '#';
        queue<pair<int, int>> q; 
        q.push({i, j});
        
        int delRow[] = {0, -1, 0, +1};
        int delCol[] = {-1, 0, +1, 0};
        
        while(!q.empty()) {
            int row = q.front().first; 
            int col = q.front().second;
            q.pop();
            
            for(int i = 0; i < 4; i++) {
                int R = row + delRow[i];
                int C = col + delCol[i];
                
                if(R < 0 || C < 0 || R >= grid.size() || C >= grid[0].size()) continue;
                
                if(grid[R][C] == 'O') {
                grid[R][C] = '#';
                q.push({R, C});
                    
                }
            }
            
        }
        
        
        return; 
    }
  
  public:
    
  
    void fill(vector<vector<char>>& grid) {
        // Code here
        
        int i = 0; 
        for(int j = 0; j < grid[0].size(); j++) {
            if(grid[i][j] == 'O') {
                //convert to '#' with bfs. 
                bfs(i, j, grid);
            }
        }
        
         i = grid.size() - 1;
```