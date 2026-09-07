# 01 Matrix

- Platform: LeetCode
- URL: https://leetcode.com/problems/01-matrix/submissions/2133812210/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 37.34
MB
- Solved At: 2026-09-07T11:14:50.605Z

## Code
```cpp
int dist = 0; 
        while(!q.empty()) {
            int sz = q.size();
            dist++;
            for(int i = 0; i < sz; i++) {
                auto curr = q.front();
                q.pop();
                int row = curr.first;
                int col = curr.second;
        
        int delRow[] = {0, -1, 0, +1};
        int delCol[] = {-1, 0, +1, 0};
                for(int i = 0; i < 4; i++) {
                    int R = row + delRow[i];
                    int C = col + delCol[i]; 
                    if(R >= 0 && C >= 0 && R < n && C < m && 
                       visited[R][C] == 0) {
                        visited[R][C] = 1; 
                        ans[R][C] = dist;
                        q.push({R, C});
                       }
                }
            }
                }
            }
        }
                if(mat[i][j] == 0) {
                    q.push({i, j});
                    visited[i][j] = 1; 
        for(int i= 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
        queue<pair<int, int>> q;
```