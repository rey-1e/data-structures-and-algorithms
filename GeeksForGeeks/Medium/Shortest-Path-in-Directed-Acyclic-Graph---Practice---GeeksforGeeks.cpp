# Shortest Path in Directed Acyclic Graph | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/shortest-path-in-directed-acyclic-graph/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-29T08:44:48.749Z

## Code
```cpp
}
        
        
        //we now have toposort in our stack; 
        
        //distance array; 
        vector<int> dist(V, INT_MAX);
        
        //hardcode src as 0; 
        int src = 0; 
        
        dist[src] = 0; 
        
        while(!st.empty()) {
            //curr node; 
            int curr = st.top();
            st.pop();
            
            for(auto edge : adj[curr]) {
                int v = edge.first;
                int wt = edge.second;
                
                if(dist[curr] != INT_MAX) {
                
                    if(dist[curr] + wt < dist[v]) {
                        dist[v] = dist[curr] + wt; 
                    }
                    
                }
            }
            
                
            
        }
        
        for(int i = 0; i < dist.size(); i++) {
            if(dist[i] == INT_MAX) {
                dist[i] = -1; 
            }
        }
        return dist;
```