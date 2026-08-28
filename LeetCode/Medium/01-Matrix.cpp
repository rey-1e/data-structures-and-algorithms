# 01 Matrix

- Platform: LeetCode
- URL: https://leetcode.com/problems/01-matrix/submissions/2123181555/?envType=problem-list-v2&envId=breadth-first-search
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 37.46
MB
- Solved At: 2026-08-28T18:09:36.060Z

## Code
```cpp
}
    
        int row[] = {0, -1, 0, +1};
        int col[] = {-1, 0, +1, 0};
            int val = 1; //adjacent values; 
            int levelSize = q.size();
            for(int i = 0; i < levelSize; i++) {
                auto curr = q.front();
                q.pop();
                for(int j = 0; j < 4; j++) {
                }
            }
                    visited[i][j] = 1; 
                    q.push({i, j});
            for(int j = 0; j < m; j++) {
                if(mat[i][j] == 0) {
        while(!q.empty()) {
        queue<pair<int, int>> q; 
        for(int i = 0; i < n; i++ ){
        vector<vector<int>> grid(n, vector<int>(m, 0));
        vector<vector<int>> visited(n, vector<int>(m, 0));
        
        int n = mat.size(); 
        int m = mat[0].size();
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
class Solution {
```