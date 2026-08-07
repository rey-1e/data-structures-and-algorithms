# Undirected Graph Cycle | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-07T10:48:43.221Z

## Code
```cpp
class Solution {
  public:
  
    bool detect(int src, vector<vector<int>>& adj, vector<int>& visited) {
        //push into the queue and mark it visited; 
        visited[src] = 1; 
        queue<pair<int, int>> q; 
        q.push({src, -1});
        
        while(!q.empty()) {
            int node = q.front().first;
            int parent = q.front().second;
            
            q.pop();
            
            for(auto val : adj[node]) {
                if(visited[val] == 0) {
                    q.push({val, node});
                    visited[val] = 1; 
                } else if(visited[val] == 1 && val != parent) {
                    return true; 
                }
            }
            
        }
        
        
        return false;
    }
  
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        
        
        //create an adjacency list; 
        vector<vector<int>> adj(V); 
        for(auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        //create a visited array; 
        vector<int> visited(V, 0);
        
        for(int i = 0; i < V; i++) {
            if(!visited[i]) {
                //call dfs; 
                if(detect(i, adj, visited)) {
                    return true;
```