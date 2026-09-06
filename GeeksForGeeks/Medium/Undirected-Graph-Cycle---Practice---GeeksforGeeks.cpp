# Undirected Graph Cycle | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-09-06T19:33:26.864Z

## Code
```cpp
class Solution {
  public:
    bool bfs(int node, vector<vector<int>>& adj, vector<int>& visited) {
        
        queue<pair<int, int>> q; 
        visited[node] = 1; 
        q.push({node, -1});
        //CHECK OR KEEP TRACK OF THE PARENT NODE THIS IS ABSOLUTELY IMPORTANT FOR UNDIRECTED
        //GRAPHS CYCLES...............
        while(!q.empty()) {
            auto curr = q.front();
            q.pop();
            for(auto& val : adj[curr.first]) {
                if(visited[val] == 0) {
                    visited[val] = 1; 
                    q.push({val, curr.first});
                } else if(val != curr.second) {
                    return true; 
                }
            }
        }
        
        return false;
    }
  
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        
        for(auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        vector<int> visited(V, 0);
        
        for(int i = 0; i < visited.size(); i++) {
            if(visited[i] == 0) {
                if(bfs(i, adj, visited)) {
                    return true; 
                }
            }
        }
        
        return false;
```