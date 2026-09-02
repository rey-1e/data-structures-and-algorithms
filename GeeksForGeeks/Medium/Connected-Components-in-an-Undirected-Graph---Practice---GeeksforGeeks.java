# Connected Components in an Undirected Graph | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/connected-components-in-an-undirected-graph/1
- Difficulty: Medium
- Language: JavaScript
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-09-02T20:03:12.363Z

## Code
```java
class Solution {
  public:
    vector<int> bfs(int node, vector<int>& visited, vector<vector<int>>& adj) {
        
        queue<int> q; 
        q.push(node);
        visited[node] = 1; 
        vector<int> vec; 
        while(!q.empty()) {
            auto curr = q.front();
            q.pop();
            
            vec.push_back(curr);
            
            for(auto val : adj[curr]) {
                
                if(visited[val] == 0) {
                    
                visited[val] = 1; 
                q.push(val);
                }
                
            }
        }
        
        
        return vec; 
    }
  
    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> ans; 
        vector<vector<int>> adj(V);
        
        for(auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        vector<int> visited(V, 0);
        
        for(int i = 0; i < visited.size(); i++) {
            if(visited[i] == 0) {
                //call the function to calculate connected complonents; 
                //use a bfs or dfs;
```