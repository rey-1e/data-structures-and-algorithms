# Flood fill Algorithm | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/flood-fill-algorithm1856/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-03T21:16:07.681Z

## Code
```cpp
class Solution {
  public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
        // code here
        //performing dfs;
        int n = image.size(); 
        int m = image[0].size();
        
        vector<vector<int>> visited(n, vector<int>(m, 0));
        
        int prev = image[sr][sc];
        queue<pair<int, int>> q; 
        q.push({sr, sc});
        
        while(!q.empty()) {
            //curr node; 
            auto curr = q.front();
            q.pop();
            int i = curr.first;
            int j = curr.second;
            
            image[i][j] = newColor; 
            
            if(i + 1 < n && visited[i+1][j] == 0 && image[i+1][j] == prev) {
                visited[i+1][j] = 1; 
                q.push({i+1, j});
            }
            if(j + 1 < m && visited[i][j+1] == 0 && image[i][j+1] == prev) {
                visited[i][j+1] = 1; 
                q.push({i, j+1});
            }
            if(i - 1 >= 0 && visited[i-1][j] == 0 && image[i-1][j] == prev) {
                visited[i-1][j] = 1; 
                q.push({i-1, j});
            }
            if(j - 1 >= 0 && visited[i][j-1] == 0 && image[i][j-1] == prev) {
                visited[i][j-1] = 1; 
                q.push({i, j-1});
            }
            
            
        }
        
        return image; 
        
    }
};
```