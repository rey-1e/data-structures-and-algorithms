# Shortest Path in Unweighted Graph | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-09-08T07:17:21.867Z

## Code
```cpp
class Solution {
  public:
    int shortestPath(int V, vector<vector<int>> &edges, int src, int dest) {
        // code here
        
        //create an adjacency list; 
        vector<vector<int>> adj(V);
        for(auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        vector<int> dist(V, INT_MAX);
        
        dist[src] = 0; 
        
        queue<pair<int, int>> q; 
        q.push({0, src}); //{distance, source};
        
        while(!q.empty()) {
            auto curr = q.front();
            int distance = curr.first;
            int node = curr.second;
            
            q.pop();
            
            for(auto& val : adj[node]) {
                if(distance + 1 < dist[val]) {
                    dist[val] = distance + 1; 
                    q.push({dist[val], val});
                }
            }
        }
        
        if(dist[dest] == INT_MAX) return -1; 
        
        return dist[dest];
    }
};
```