# Safe States | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/eventual-safe-states/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-19T16:17:48.495Z

## Code
```cpp
check[node] = 0; 
        
        //check for adjacency here; 
        for(auto val : adj[node]) {
            if(!visited[val]) {
                //check for other; 
                if(helper(val, adj, visited, pathVisited, check)) return true; ; 
                
            } else if(pathVisited[val]) {
                return true; 
            }
        }
        
        check[node] = 1; 
        pathVisited[node] = 0; 
        return false;
    }
  
    vector<int> safeNodes(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V); 
        
        for(auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
        }
        
        vector<int> visited(V, 0);
        vector<int> pathVisited(V, 0);
        vector<int> check(V, 1);
        vector<int> ans;
        
        for(int i = 0; i < visited.size(); i++) {
            if(!visited[i]) {
                //call the function; 
                helper(i, adj, visited, pathVisited, check);
            }
        }
        
        //loops and stuff; 
        for(int i = 0; i < check.size(); i++) {
            if(check[i] == 1) {ans.push_back(i);}
        }
        
        
        return ans;
        
    }
};
```