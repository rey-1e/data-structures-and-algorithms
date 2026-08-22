# Safe States | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/eventual-safe-states/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-22T16:52:34.473Z

## Code
```cpp
class Solution {
  public:
    vector<int> safeNodes(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>>adj(V);
        vector<int> indegree(V);
        for(auto edge : edges) {
            adj[edge[1]].push_back(edge[0]);
            indegree[edge[0]]++;
        }
        
        queue<int> q; 
        
        for(int i = 0; i < V; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }
        
        vector<int> ans; 
        
        while(!q.empty()) {
            int curr = q.front();
            
            ans.push_back(curr);
            q.pop();
            
            for(auto val : adj[curr]) {
                indegree[val]--;
                
                if(indegree[val] == 0) {
                    q.push(val);
                }
            }
        }
        
        sort(ans.begin(), ans.end());
        
        return ans;
```