# Count Islands | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-03T14:55:36.388Z

## Code
```cpp
q.push({i, j - 1});
                grid[i][j-1] = '#';
            }
            //right check;
            if(j+1 < m && grid[i][j+1] == 'L') {
                q.push({i, j + 1});
                grid[i][j+1] = '#';
            }
            //bottom right; 
            if((i + 1 < n && j + 1 < m) && grid[i+1][j+1] == 'L') {
                q.push({i + 1, j + 1});
                grid[i+1][j+1] = '#';
            }
            //top left; 
            if((i-1 >= 0 && j - 1 >= 0) && grid[i-1][j-1] == 'L') {
                q.push({i - 1, j - 1});
                grid[i-1][j-1] = '#';
            }
            //something else; 
            if((i -1 >= 0 && j + 1 < m) && grid[i-1][j+1] == 'L') {
                q.push({i - 1, j + 1});
                grid[i-1][j+1] = '#';
            }
            if((i + 1 < n && j - 1 >= 0) && grid[i+1][j-1] == 'L') {
                q.push({i+1, j-1});
                grid[i+1][j-1] = '#';
            }
        }
        
        return; 
        
    }
  
    int countIslands(vector<vector<char>>& grid) {
        
        if(grid.size() == 0) return 0; 
        // Code here
        int count = 0; 
        //create a bfs search algorithm over the entire grid; 
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] == 'L') {
                    count++;
                    traverse(i, j, grid);
                }
            }
        }
        
        return count; 
        
    }
```