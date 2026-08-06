# Undirected Graph Cycle | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-06T08:23:03.925Z

## Code
```cpp
public:
    bool dfs(int i, vector<vector<int>>& adj, vector<int>& visited) {
        
        queue<int> q; 
        q.push(i);
        visited[i] = 1; 
        
        for(auto val : adj[i]) {
            if(visited[val] == 0) {
                visited[val] = 1; 
                return dfs(val, adj, visited);
            } else {
                return true;
            }
        }
        
        
        return false;
        
    }
  
    bool isCycle(int V, vector<vector<int>>& edges) {
        
        //edge case; 
        if(V == 0 || edges.size() ==0) return false;
        
        
        // Code here
        //create a graph out of this; 
        vector<vector<int>> adj(V);    
        
        for(auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        //dfs for all the nodes; 
        
        for(int i = 0; i < adj.size(); i++) {
        vector<int> visited(adj.size(), 0);
            if(dfs(i, adj, visited)) {
                return true; 
            }
        }
        
        
        return false;
```