# Shortest Distance in a Binary Maze | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/shortest-path-in-a-binary-maze-1655453161/1
- Difficulty: Hard
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-09-01T14:49:20.681Z

## Code
```cpp
class Solution {
    public:
    int shortestPath(vector<vector<int>> &mat, vector<int> &src, vector<int> &dest) {
        // code here
        if(mat[src[0]][src[1]] == 0 || mat[dest[0]][dest[1]] == 0) return -1; 
        if(src == dest) return 0; 
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        queue<pair<int, pair<int, int>> > q;
        dist[src[0]][src[1]] = 0;
        
        int delRow[] = {0, -1, 0, +1};
        int delCol[] = {-1, 0, +1, 0};
        
        q.push({0, {src[0], src[1]}});
        
        while (!q.empty()) {
            
            int distance = q.front().first;
            pair node = q.front().second;
            
            int row = node.first;
            int col = node.second;
            q.pop();
            
            for (int i = 0; i < 4; i++) {
                int R = row + delRow[i];
                int C = col + delCol[i];
                
                if (R >= 0 && C >= 0 && R < n && C < m && mat[R][C] != 0) {
                    // currWeight
                    int currDist = dist[R][C];
                    
                    if (distance + 1 < currDist) {
                        // change that dist;
                        dist[R][C] = distance + 1;
                        q.push({dist[R][C], {R, C}});
                    //  if (R == dest[0] && C == dest[1]) {
                    //      return dist[R][C];
                    //  }
                    }
```