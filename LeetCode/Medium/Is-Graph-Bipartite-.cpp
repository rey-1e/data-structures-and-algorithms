# Is Graph Bipartite?

- Platform: LeetCode
- URL: https://leetcode.com/problems/is-graph-bipartite/submissions/2133937509/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: N/A
- Solved At: 2026-09-07T13:42:12.940Z

## Code
```cpp
bool isBipartite(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> visited(V, 0);
        vector<int> colors(V, 0);
        for(int i= 0; i < V; i++) {
            if(visited[i] == 0) {
                //call the dfs function to color the numbers; 
    }
        }
            } else if(colors[val] == colors[node]) {
                return false;
            }
                    use = 1; 
                }
                colors[val] = use; 
                if(!dfs(val, graph, visited, colors)) {
                    return false;
                }
        return true; 
                } else {
                    use = 2; 
                if(colors[node] == 1) {
                int use = 0; 
            if(visited[val] == 0) {
                //then it's great;
        for(auto& val : graph[node]) {
    bool dfs(int node, vector<vector<int>>& graph, vector<int>& visited, vector<int>& colors) {
        
        visited[node] = 1; 
class Solution {
public:
                if(colors[i] == 0) {
                    colors[i] = 1; 
                }
```