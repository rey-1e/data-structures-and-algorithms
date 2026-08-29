# Shortest Path in Unweighted Graph | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-29T09:12:33.564Z

## Code
```cpp
class Solution {
  public:
    int shortestPath(int V, vector<vector<int>> &edges, int src, int dest) {
        // code here
        vector<vector<int>> adj(V);
        
        for(auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        //distance array for relaxation; 
        vector<int> dist(V, INT_MAX);
        
        //we are given the source; 
        dist[src] = 0; 
        queue<pair<int, int>> q; 
        q.push({src, 0});
        
        while(!q.empty()) {
            int node = q.front().first; 
            int D = q.front().second;
            q.pop();
            
            for(auto val : adj[node]) {
                
                if(D + 1 < dist[val]) {
                    dist[val] = D + 1; 
                    q.push({val, D + 1});
                }
                
            }
        }
        
        if(dist[dest] == INT_MAX) return -1; 
        
        return dist[dest];
    }
};
```