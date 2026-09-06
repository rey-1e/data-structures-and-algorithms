# Flood Fill

- Platform: LeetCode
- URL: https://leetcode.com/problems/flood-fill/submissions/2133237601/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 18.21
MB
- Solved At: 2026-09-06T19:24:11.745Z

## Code
```cpp
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> mat = image; 
        //create a queue
        queue<pair<int, int>> q; 
        q.push({sr, sc});
        mat[sr][sc] = color; 
        
        while(!q.empty()){ 
            auto curr = q.front();
        }
            int row = curr.first;
            int col = curr.second;
            for(int i = 0; i < 4; i++) {
        int delRow[] = {0, -1, 0, +1};
        int delCol[] = {-1, 0, +1, 0};
                int R = row + delRow[i];
            }
                int C = col + delCol[i]; 
                if(R >= 0 && C >= 0 && R < n && C < m 
                   && image[R][C] == image[row][col] && mat[R][C] != color) {
                    mat[R][C] = color; 
                   }
    }
                    q.push({R, C});
        return mat;
            q.pop();
};
```