# Rotting Oranges

- Platform: LeetCode
- URL: https://leetcode.com/problems/rotting-oranges/submissions/2133232489/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 16.76
MB
- Solved At: 2026-09-06T19:17:00.371Z

## Code
```cpp
while(!q.empty()) {
            int sz = q.size();
            bool hasRotten = false;
        int delRow[] = {0, -1, 0, +1};
        int delCol[] = {-1, 0, +1, 0};
        }   
        int time = 0;
                    if(R < n && C < m && R >= 0 && C >= 0 && 
                        grid[R][C] == 1) {
                    int C = curr.second + delCol[i];
                    int R = curr.first + delRow[i]; 
                for(int i = 0; i < 4; i++) {
                q.pop();
                auto curr = q.front();
                //traverse the surrounding and push into the queue. 
            for(int i = 0; i < sz; i++) {
                }                
            }
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 2) {
                    q.push({i, j});
        queue<pair<int, int>> q; 
        for(int i = 0; i < n; i++) {
                            grid[R][C] = 2; 
                            q.push({R, C});
                        }
                }
                
            }
            if(hasRotten) {
                            hasRotten = true; 
                time++;
            }
```