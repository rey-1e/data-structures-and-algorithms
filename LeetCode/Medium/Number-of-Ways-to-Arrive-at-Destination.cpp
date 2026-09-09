# Number of Ways to Arrive at Destination

- Platform: LeetCode
- URL: https://leetcode.com/problems/number-of-ways-to-arrive-at-destination/submissions/2136111673/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 34.98
MB
- Solved At: 2026-09-09T08:49:53.591Z

## Code
```cpp
ways[0] = 1; 
        std::priority_queue<std::pair<long long, int>, std::vector<std::pair<long long, int>>, 
        std::greater<std::pair<long long, int>>> pq;
        pq.push({0, 0}); //{distance, node};
        int mod = 1e9 + 7; 
        
        while(!pq.empty()) {
            auto curr = pq.top();
            pq.pop();
            long long distance = curr.first;
            int node = curr.second;
            for(auto& val : adj[node]) {
                int adjNode = val.first;
                int adjWeight = val.second;
                if(adjWeight + distance == dist[adjNode]) {
                    ways[adjNode] += ways[node];
                    ways[adjNode] = ways[adjNode] % mod; 
                } else if(adjWeight + distance < dist[adjNode]) {
                    dist[adjNode] = adjWeight + distance; 
        vector<long long> dist(n, LLONG_MAX);
        dist[0] = 0; 
        vector<long long> ways(n, 0);
            adj[edge[1]].push_back({edge[0], edge[2]});
        }
    int countPaths(int n, vector<vector<int>>& roads) {
        
        vector<vector<pair<int, int>>> adj(n);
        for(auto& edge : roads) {
            adj[edge[0]].push_back({edge[1], edge[2]});
class Solution {
public:
```