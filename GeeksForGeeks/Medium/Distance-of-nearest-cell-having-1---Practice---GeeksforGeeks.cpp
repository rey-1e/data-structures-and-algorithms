# Distance of nearest cell having 1 | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/distance-of-nearest-cell-having-1-1587115620/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-08T08:48:49.512Z

## Code
```cpp
for(int i = 0; i < 4; i++ ) {
                //convert the nearest -1's to the distance of itself{count};
                int row = curr.first + delRow[i];
                int col = curr.second + delCol[i];
                
                //break condition; 
                if(row < 0 || row >= distance.size() || col < 0 || col >= distance[0].size()) continue; 
                
                if(distance[row][col] == -1) {
                    distance[row][col] = count; 
                    q.push({row, col});
                }
            }   
            }
        }
    }
    
  
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        // code here
        if(grid.size() == 0) return {};
        
        int n = grid.size(); 
        int m = grid[0].size();
        
        vector<vector<int>> distance(n, vector<int>(m, -1));
        
        queue<pair<int, int>> q; 
        bool hasOne = false;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1) {
                    hasOne = true;
                    distance[i][j] = 0; 
                    q.push({i, j});
                }
            }
        }
        
        if(!hasOne) return {};
        
        //call for bfs searcher. 
        construct(q, distance);
        
        
        return distance;
    }
```