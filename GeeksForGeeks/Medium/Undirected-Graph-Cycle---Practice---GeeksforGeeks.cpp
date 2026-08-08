# Undirected Graph Cycle | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-08T07:32:44.805Z

## Code
```cpp
class Solution {
  public:
    bool dfs(int parent, int src, vector<vector<int>>& adj, vector<int>& visited) {
        
        visited[src] = 1; 
        
        for(auto val : adj[src]) {
            if(visited[val] == 0) {
                //simply call;
                if (dfs(src, val, adj, visited)) return true;
            } else if(val != parent) {
                return true; 
            }
        }
        
        
        return false;
    }
  
  
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        
        for(auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        
        vector<int> visited(V, 0);
        
        for(int i = 0; i < V; i++) {
            if(visited[i] == 0) {
                if(dfs(-1, i, adj, visited)) return true; 
            }
        }
        
        
        
        return false;
    }
};
```