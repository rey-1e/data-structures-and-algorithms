# DFS of Graph | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-30T13:14:10.795Z

## Code
```cpp
class Solution {
  public:
  vector<int> traversal;
 
    void travel(int start, vector<vector<int>>& adj, vector<int>& v) {
        
        traversal.push_back(start);
        v[start] = 1; 
        
        for(auto it : adj[start]) { 
            if(!v[it]) {
                travel(it, adj, v);
            }
        }
        
        
        return; 
    }
  
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int> v(adj.size() , 0);
        
        travel(0, adj, v);
        
        return traversal;
    }
};
```