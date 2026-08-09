# Number of Enclaves

- Platform: LeetCode
- URL: https://leetcode.com/problems/number-of-enclaves/submissions/2100177272/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 36.16
MB
- Solved At: 2026-08-09T09:46:03.002Z

## Code
```cpp
int numEnclaves(vector<vector<int>>& grid) {
        
        int n= grid.size(); 
        int m = grid[0].size();
        vector<vector<int>> matrix = grid;
 
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                    //call bfs if it's a one & convert them to '#';
    }
                    if(matrix[i][j] == 1) {
                        dfs(i, j, matrix);
                    }
                }
            }
        }
        int count = 0; 
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == 1) {
                    count++;
                }
            }
        }
        return count;
    }
};
```