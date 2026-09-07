# Topological Sort | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/topological-sort/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-09-07T16:05:41.212Z

## Code
```cpp
class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        
        //indegree vector; 
        vector<int> indegree(V, 0);
        //create an ajdacency list; 
        vector<vector<int>> adj(V);
        
        for(auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            indegree[edge[1]]++;
        }
        
        queue<int> q; 
        for(int i = 0; i < V; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }
        vector<int> vec; 
        while(!q.empty()) {
            auto curr = q.front(); //current node; 
            q.pop();
            vec.push_back(curr);
            
            for(auto& val : adj[curr]) {
                indegree[val]--;
                if(indegree[val] == 0) {
                    q.push(val);
                }
            }
        }
        
        if(vec.size() == V) return vec; 
        
        return {};
        
        
    }
};
```