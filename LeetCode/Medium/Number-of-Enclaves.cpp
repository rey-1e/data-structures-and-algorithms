# Number of Enclaves

- Platform: LeetCode
- URL: https://leetcode.com/problems/number-of-enclaves/submissions/2100178105/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 33.24
MB
- Solved At: 2026-08-09T09:47:29.786Z

## Code
```cpp
int numEnclaves(vector<vector<int>>& grid) {
        
        int n= grid.size(); 
        int m = grid[0].size();
 
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                    //call bfs if it's a one & convert them to '#';
    }
                    if(grid[i][j] == 1) {
                        dfs(i, j, grid);
        return; 
        }
            }
            dfs(R, C, matrix);
                    }
                }
            }
        }
        int count = 0; 
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1) {
                    count++;
                }
            }
        }
        return count;
```