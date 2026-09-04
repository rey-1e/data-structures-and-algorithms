# Path With Minimum Effort | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/path-with-minimum-effort/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-09-04T14:31:21.622Z

## Code
```cpp
vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        
        priority_queue<PIP, vector<PIP>, greater<PIP>> pq;
        
        int delRow[] = {0, -1, 0, +1};
        int delCol[] = {-1, 0, +1, 0};
        
        pq.push({0, {0, 0}});
        
        dist[0][0] = 0;
        
        while (pq.empty() == false) {
            // take the curr;
            int absoluteDiff = pq.top().first;
            int row = pq.top().second.first;
            int col = pq.top().second.second;
            pq.pop();
            // check for surroundings;
            for (int i = 0; i < 4; i++) {
                int currRow = row + delRow[i];
                int currCol = col + delCol[i];
                
                if (currRow >= 0 && currCol >= 0 && currRow < n && currCol < m)
                {
                    int currAbsDiff = abs(mat[currRow][currCol] - mat[row][col]);
                    int newDist = max(absoluteDiff, currAbsDiff);
                    
                    if (dist[currRow][currCol] > newDist) {
                        dist[currRow][currCol] = newDist;
                        pq.push({newDist, {currRow, currCol}});
                    }
                }
                
            }
            
        }
        
        if (dist[n - 1][m - 1] == INT_MAX)
            return - 1;
        
        return dist[n - 1][m - 1];
    }
};
```