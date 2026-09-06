# Connected Components in an Undirected Graph | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/connected-components-in-an-undirected-graph/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-09-06T17:05:10.078Z

## Code
```cpp
vector<int> bfs(int node, vector<vector<int>>& adj, vector<int>& visited) {
        
        visited[node] = 1; 
        queue<int> q; 
        q.push(node);
        vector<int> vec; 
        while(!q.empty()) {
            int curr = q.front();
            q.pop();
            vec.push_back(curr);
            
            for(auto& val : adj[curr]) {
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
        vector<vector<int>> adj(V);
        vector<vector<int>> ans;
        //make the connected graphs; 
        for(auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<int> visited(V, 0);
        
        for(int i = 0; i < visited.size(); i++) {
            if(visited[i] == 0) {
            
                ans.push_back(bfs(i, adj, visited));
            }
        }
        return ans; 
    }
};
```