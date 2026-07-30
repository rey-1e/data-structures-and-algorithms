# BFS of graph | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-30T12:49:19.376Z

## Code
```cpp
class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        if(adj.empty() == true) return {};
        
        vector<int> visited(adj.size(), 0);
        queue<int> q; 
        
        q.push(0);
        visited[0] = 1; 
        
        vector<int> bfs; 
        
        while(!q.empty()) {
            int curr = q.front();
            q.pop();
            
            bfs.push_back(curr);
            
            for(auto it : adj[curr]) {
                if(!visited[it]) {
                    visited[it] = 1; 
                    q.push(it);
                }
            }
        }
        
        
        return bfs; 
        
        
    }
};
```