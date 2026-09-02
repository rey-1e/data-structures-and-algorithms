# DFS of Graph | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-09-02T20:07:35.948Z

## Code
```cpp
class Solution {
  public:
    void getdfs(int node, vector<int>& visited, vector<vector<int>>& adj, vector<int>& ans) {
        visited[node] = 1; 
        
        ans.push_back(node);
        for(auto& val : adj[node]) {
            if(visited[val] == 0) {
                //cal the dfs for that functoin; 
                getdfs(val, visited, adj, ans);
            }
        }
        
        
        return; 
    }
  
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int> ans; 
        
        vector<int> visited(adj.size(), 0);
    
        //since it's mentioned the graph is going to be connected;     
        getdfs(0, visited, adj, ans);
        
        
        return ans;
    }
};
```