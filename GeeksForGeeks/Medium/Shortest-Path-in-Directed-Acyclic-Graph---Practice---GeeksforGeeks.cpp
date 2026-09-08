# Shortest Path in Directed Acyclic Graph | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/shortest-path-in-directed-acyclic-graph/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-09-08T07:24:39.909Z

## Code
```cpp
vector<int> shortestPath(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<pair<int, int>>> adj(V);
        
        //adjacency vector; 
        for(auto& edge : edges) {
            adj[edge[0]].push_back({edge[1], edge[2]});
        }
        
        vector<int> dist(V, INT_MAX);
        dist[0] = 0; 
        
        queue<pair<int, int>> q; 
        q.push({0, 0});
        
        while(!q.empty()) {
            auto curr = q.front();
            int distance = curr.first;
            int node = curr.second;
            
            q.pop();
            
            for(auto& val : adj[node]) {
                int adjNode = val.first;    
                int adjWeight = val.second;
                
                if(adjWeight + distance < dist[adjNode]) {
                    dist[adjNode] = adjWeight + distance; 
                    q.push({dist[adjNode], adjNode});
                }
                
            }
        }
        
        for(auto& val : dist) {
            if(val == INT_MAX) {
                val = -1; 
            }
        }
        
        return dist;
    }
};
```