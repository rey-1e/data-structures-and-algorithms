# Cheapest Flights Within K Stops

- Platform: LeetCode
- URL: https://leetcode.com/problems/cheapest-flights-within-k-stops/submissions/2135311548/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 17.86
MB
- Solved At: 2026-09-08T15:51:54.013Z

## Code
```cpp
vector<int> dist(n, INT_MAX);
        dist[src] = 0; 
        queue<pair<int, pair<int, int>>> q; 
        q.push({0, {src, 0}}); //{stops, {node, distance}};
        while(!q.empty()) {
            auto curr = q.front();
            q.pop();
            int stops = curr.first;
            int node = curr.second.first;
            int cost = curr.second.second;
            if(stops > k) continue;
            for(auto& val : adj[node]) {
                int adjNode = val.first; 
                int edgeWeight = val.second;
                if(edgeWeight + cost < dist[adjNode] && stops <= k) {
                    dist[adjNode] = edgeWeight + cost; 
                    q.push({stops + 1, {adjNode, dist[adjNode]}});
                }
            }
        }
        if(dist[dst] == INT_MAX) return -1; 
        for(auto& edge : flights) {
            adj[edge[0]].push_back({edge[1], edge[2]});
        }
        
        vector<vector<pair<int, int>>> adj(n);
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
class Solution {
```