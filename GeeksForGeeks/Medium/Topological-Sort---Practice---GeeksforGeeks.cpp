# Topological Sort | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/topological-sort/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-20T18:22:57.228Z

## Code
```cpp
class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        
        //create an adjacency list; 
        vector<vector<int>> adj(V);
        
        vector<int> indegree(V); 
        
        for(auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            //include the degree part as well; 
            indegree[edge[1]]++; 
        }
        
        //answer vector;         
        vector<int> arr; 
        queue<int> q; 
        
        for(int i = 0; i < V; i++) {
            if(indegree[i] == 0) q.push(i);
        }
        
        while(!q.empty()) {
            int curr = q.front();
            q.pop();
            
            arr.push_back(curr);
            
            for(auto& val : adj[curr]) {
                indegree[val]--;
                
                if(indegree[val] == 0) {
                    q.push(val);
                }
            }
        }
        
        
        return arr; 
    }
```