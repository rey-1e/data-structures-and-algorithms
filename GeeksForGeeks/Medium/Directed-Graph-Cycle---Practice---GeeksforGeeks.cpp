# Directed Graph Cycle | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-13T13:12:57.336Z

## Code
```cpp
pathVisited[node] = 1; 
        
        
        //call the dfs functiono again; 
        for(auto& val : edges[node]) {
            if(visited[val] == 0) {
                //node is not visited; 
                if(dfs(val, edges, visited, pathVisited)) return true;
            } else if(pathVisited[val] == 1){
                //we will see; 
                return true; 
                
            }
        }
        
        
        //back track; 
        pathVisited[node] = 0; 
        return false;
        
    }
  
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<int> visited(V);
        vector<int> pathVisited(V);
        
        //create an adjacency matrix; 
        vector<vector<int>> adj(V);
        for(auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
        }
        
        
        for(int i  =0; i < V; i++) {
            if(visited[i] == 0) {
                //this is unvisited
                if(dfs(i, adj, visited, pathVisited)) return true; 
                
            }
        }
        
        
        return false;
        
    }
};
```