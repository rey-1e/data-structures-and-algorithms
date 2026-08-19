# Directed Graph Cycle | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-19T16:07:54.159Z

## Code
```cpp
//call for the entire adjacent nodes; 
        for(auto val : adj[node]) {
            if(!visited[val]) {
                
                if(hasCycle(val, adj, visited, pathVisited)) return true; 
                
            } else if(pathVisited[val]) {
                return true; 
            }
            
            
        }
        
        
        
        pathVisited[node] = 0; 
        return false;
        
    }
  
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>> adj(V); 
        
        //adjancency list; 
        for(auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
        }
        
        //visited array; 
        vector<int> visited(V, 0); 
        //pathVisited array; 
        vector<int> pathVisited(V, 0); 
        
        for(int i = 0; i < visited.size(); i++) {
            if(!visited[i]) {
                //call the dfs algo;
                if(hasCycle(i, adj, visited, pathVisited)) return true; 
                
            }
        }
        
        
        return false;
        
        
    }
};
```