# Number of Ways to Arrive at Destination | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/number-of-ways-to-arrive-at-destination/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-09-06T15:07:40.278Z

## Code
```cpp
//create a graph; 
        for(auto& edge : edges) {
            adj[edge[0]].push_back({edge[1], edge[2]});
            adj[edge[1]].push_back({edge[0], edge[2]});
        }
        
        //create a dist array; 
        vector<int> dist(V, INT_MAX);
        
        //create a ways array; 
        vector<int> ways(V, 0);
        
        dist[0] = 0; 
        ways[0] = 1; 
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        pq.push({0, 0}); //distance , node; 
        
        while(!pq.empty()) {
            auto curr = pq.top();
            pq.pop();
            
            int distance = curr.first;
            int node = curr.second;
            
            for(auto& val : adj[node]) {
                int adjNode = val.first;
                int adjWeight = val.second;
                
                if(dist[adjNode] == adjWeight + distance) {
                    ways[adjNode] += ways[node];
                } else if(adjWeight + distance < dist[adjNode]) {
                    //we simply edit the dist, push in the pq, and update the ways; 
                    dist[adjNode] = adjWeight + distance; 
                    pq.push({dist[adjNode], adjNode});
                    ways[adjNode] = ways[node];
                }
            }
        }
        
        return ways[V-1];
    }
};
```