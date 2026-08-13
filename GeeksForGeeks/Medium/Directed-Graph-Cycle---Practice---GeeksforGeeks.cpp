# Directed Graph Cycle | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-13T13:09:48.633Z

## Code
```cpp
class Solution {
  public:
    
    bool dfs(int node, vector<vector<int>>& edges, vector<int>& visited, vector<int>& pathVisited) {
        
        visited[node] = 1; 
        pathVisited[node] = 1; 
        
        
        //call the dfs functiono again; 
        for(auto& val : edges[node]) {
            if(visited[node] == 0) {
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
        
        for(int i  =0; i < V; i++) {
            if(visited[i] == 0) {
                //this is unvisited
                if(dfs(i, edges, visited, pathVisited)) return true; 
                
            }
        }
        
        
        return false;
        
    }
};
```