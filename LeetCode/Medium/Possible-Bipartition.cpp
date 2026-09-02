# Possible Bipartition

- Platform: LeetCode
- URL: https://leetcode.com/problems/possible-bipartition/submissions/2128875389/?envType=problem-list-v2&envId=breadth-first-search
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 76.57
MB
- Solved At: 2026-09-02T18:51:49.396Z

## Code
```cpp
return true; 
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        
        vector<vector<int>> adj(n + 1);
        for(auto edge : dislikes) {
            adj[edge[0]].push_back(edge[1]);
        }
                return false;
            }
                if(!bfs(val, visited, adj, color)) {
                    return false;
                }
            } else if(color[val] == color[node]) {
                    color[val] = 1; 
                }
                    color[val] = 0; 
                } else {
            if(visited[val] == 0) {
                if(color[node] == 1) {
        visited[node] = 1; 
        for(auto val : adj[node]) {
class Solution {
public:
    bool bfs(int node, vector<int>& visited, vector<vector<int>>& adj, 
    vector<int>& color) {
```