# Number of Distinct Islands | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/number-of-distinct-islands/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-09T15:29:04.143Z

## Code
```cpp
//vector that you are getting are from here; 
            ans.push_back({row - i, col - j});
            
            for(int counter = 0; counter < 4; counter++) {
                int R = row + delRow[counter];
                int C = col + delCol[counter]; 
                
                if(R >= 0 && R < grid.size() && C >= 0 && C < grid[0].size() && grid[R][C] == 'L' && visited[R][C] == 0) {
                    q.push({R, C});
                    visited[R][C] = 1; 
                }
            }
            
        }
        
        
        return ans;
    }
  
    int countDistinctIslands(vector<vector<char>>& grid) {
        // code here
        
        if(grid.size() == 0) return 0; 
        
        int n = grid.size();
        int m = grid[0].size();
        
        set<vector<pair<int, int>>> s; 
        
        vector<vector<int>> visited(n, vector<int>(m, 0));
        
        int delRow[] = {0, -1, 0, +1};
        int delCol[] = {-1, 0, +1, 0};
        
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 'L' && visited[i][j] == 0) {
                    //call bfs which returns the set with the base value removed from the vec. 
                    s.insert(bfs(i, j, grid, visited, delRow, delCol));
                }
            }
        }
        
        
        return s.size();
```