# Connected Components in an Undirected Graph | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/connected-components-in-an-undirected-graph/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-02T07:37:57.041Z

## Code
```cpp
//note from here. 
            arr.push_back(curr);
            
            for(auto& val : edges[curr]) {
                
                if(visited[val] == 0) {
                q.push(val);
                visited[val] = 1; 
                    
                }
                
            }
        }
        
        return arr; 
        
    }
  
    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        // code here
        //edges to adjacency list; 
        
        vector<vector<int>> adj(V);
        
        for(auto vec : edges) {
            adj[vec[0]].push_back(vec[1]);
            adj[vec[1]].push_back(vec[0]);
        }
        
        
        vector<int> visited(V, 0);
        vector<vector<int>> ans; 
        
        
        
        
        
        for(int i = 0; i < V; i++) {
            if(visited[i] == 0) {
                vector<int> curr = bfs(adj, visited, i);
                ans.push_back(curr);          
            }
        }
        
        
        
        return ans;
    }
};
```