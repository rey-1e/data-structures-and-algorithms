# Network Delay Time

- Platform: LeetCode
- URL: https://leetcode.com/problems/network-delay-time/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 44.18
MB
- Solved At: 2026-09-08T15:59:48.926Z

## Code
```cpp
while(!pq.empty()) {
        //time, node;
            auto curr = pq.top();
        }
            pq.pop();
            int time = curr.first;
            int node = curr.second;
            for(auto& val : adj[node]) {
                int adjNode = val.first;
            }
                int edgeWeight = val.second;
                if(edgeWeight + time < dist[adjNode]) {
                    dist[adjNode] = edgeWeight + time; 
                }
                    pq.push({dist[adjNode], adjNode});
        int maxx = 0; 
        pq.push({0, k});
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> dist(n + 1, INT_MAX);
        dist[k] = 0; 
        //priority queue. 
        }
        vector<vector<pair<int, int>>> adj(n + 1);
        for(auto& edge : times) {
            adj[edge[0]].push_back({edge[1], edge[2]});
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        dist[0] = 0;
```