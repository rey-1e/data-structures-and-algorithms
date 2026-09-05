# Shortest Path with at most k Nodes | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/shortest-path-with-at-most-k-nodes/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-09-05T08:12:57.499Z

## Code
```cpp
class Solution {
  public:
    int findCheapestCost(int n, vector<vector<int>>& edges, int src, int dst, int k) {
        // code here
        
        vector<vector<pair<int, int>>> adj(n);
        
        for(auto edge : edges) {
            adj[edge[0]].push_back({edge[1], edge[2]});
        }
        
        vector<int> dist(n, INT_MAX);//stores the cost; 
        dist[src] = 0; 
        
        queue<vector<int>> q; 
        q.push({0, src, 0});
        dist[src] = 0; 
        
        while(!q.empty()) {
            //take the curr and move on; 
            auto curr = q.front();
            q.pop();
            
            int stops = curr[0];
            int node = curr[1];
            int cost = curr[2];
            
            if(stops > k) continue;
            
            for(auto val : adj[node]) {
                int adjNode = val.first;
                int adjWgt = val.second;
                
                if(cost + adjWgt < dist[adjNode] && stops <= k) {
                    dist[adjNode] = cost + adjWgt;
                    
                    q.push({stops + 1, adjNode, dist[adjNode]});
                }   
            }
        }
        
        if(dist[dst] == INT_MAX) return -1; 
        
        return dist[dst];
    }
```