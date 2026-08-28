# Shortest Path in Directed Acyclic Graph | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/shortest-path-in-directed-acyclic-graph/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-28T13:46:40.095Z

## Code
```cpp
//stack 
        stack<int> st; 
        
        for(int i = 0; i < visited.size(); i++) {
            if(visited[i] == 0) {
                topoSort(i, visited, adj, st);
            }
        }
        
        //create a distance array; 
        vector<int> dist(V, INT_MAX);
        
        int src = 0; //due to current problem; 
        dist[src] = 0; 
        
        while(!st.empty()) {
            int curr = st.top();
            st.pop();
            
            for(auto val : adj[curr]) {
                int v = val.first; 
                int wt = val.second;
                
                if(dist[curr] != INT_MAX) {
                    
                if(dist[curr] + wt < dist[v]) {
                    dist[v] = dist[curr] + wt; 
                }   
                }
            }
        }
        
        for(auto& val : dist) {
            if(val == INT_MAX) val = -1; 
        }
        
        return dist; 
        
    }
};
```