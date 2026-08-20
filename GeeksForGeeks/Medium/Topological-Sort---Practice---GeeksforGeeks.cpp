# Topological Sort | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/topological-sort/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-20T15:49:44.080Z

## Code
```cpp
class Solution {
  public:
  
    void dfs(int node, vector<vector<int>>& adj, vector<int>& visited, stack<int>& st) {
        
        //mark visited; 
        visited[node] = 1; 
        
        for(auto val : adj[node]) {
            if(visited[val] == 0) {
                dfs(val, adj, visited, st);
            }
        }
        
        st.push(node);
        
        return; 
        
    }
  
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        stack<int> st; 
        vector<int> ans; 
        
        for(auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
        }
        
        //maintaining a visited array; 
        vector<int> visited(V, 0);
        
        for(int i = 0; i < V; i++) {
            if(visited[i] == 0) {
                //make sure to call dfs algo for this. 
                dfs(i, adj, visited, st);
            }
        }
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
```