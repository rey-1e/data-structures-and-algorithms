# Directed Graph Cycle | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-22T07:26:27.431Z

## Code
```cpp
class Solution {
  public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<int> indegree(V);
        vector<vector<int>> adj(V); 
        //toposort array; 
        vector<int> arr; 
        
        //we now have the adjacency list; 
        for(auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            indegree[edge[1]]++;
        }
        
        
        queue<int> q; 
        
        for(int i = 0; i < indegree.size(); i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }
        
        while(!q.empty()) {
            int curr = q.front();
            q.pop();
            
            arr.push_back(curr);
            
            for(auto val : adj[curr]) {
                indegree[val]--;
                
                if(indegree[val] == 0) {
                    q.push(val);
                }
            }
        }
        
        
        return !(arr.size() == V);
```