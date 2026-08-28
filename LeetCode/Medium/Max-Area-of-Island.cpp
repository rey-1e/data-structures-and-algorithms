# Max Area of Island

- Platform: LeetCode
- URL: https://leetcode.com/problems/max-area-of-island/submissions/2123131565/?envType=problem-list-v2&envId=breadth-first-search
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 32.16
MB
- Solved At: 2026-08-28T17:24:58.656Z

## Code
```cpp
class Solution {
public:
    int bfs(int i, int j, vector<vector<int>>& visited, vector<vector<int>>& 
    grid) {
        int n = grid.size(); 
        int m = grid[0].size();
        //mark the curr a sivsited; 
        visited[i][j] = 1; 
        int count = 1; 
        int rows[] = {0, -1, 0, +1};
        int cols[] = {-1, 0, +1, 0};
        queue<pair<int, int>> q; 
        q.push({i, j});
        while(!q.empty()) {
            int R = q.front().first;
            int C = q.front().second;
            q.pop();
            for(int i = 0 ; i < 4; i++) {
                int currRow = R + rows[i];
                int currCol = C + cols[i];
                if(currRow >= 0 && currCol >= 0 && currRow < n && currCol < 
                m && visited[currRow][currCol] == 0 && grid[currRow][currCol] 
                == 1) {
                    //calculate the value; 
                    count++;
                    visited[currRow][currCol] = 1; 
                    q.push({currRow, currCol});
                }
            }
```