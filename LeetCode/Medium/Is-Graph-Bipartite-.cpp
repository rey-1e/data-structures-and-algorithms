# Is Graph Bipartite?

- Platform: LeetCode
- URL: https://leetcode.com/problems/is-graph-bipartite/description/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-13T13:13:30.979Z

## Code
```cpp
class Solution {
public:
    bool dfs(int i, vector<vector<int>>& graph, vector<int>& 
    color, int fill) {
        color[i] = fill;
        for(auto val : graph[i]) {
            if(color[val] == 0) {
                //simply pass karu shakto with different fill; 
                int newColor = 0; 
                (fill == 1) ? newColor = 2 : newColor = 1; 
                if(!dfs(val, graph, color, newColor)) return 
                false;
            } else if(color[val] == color[i]) {
                return false;
            }
        }
        return true; 
    }
    bool isBipartite(vector<vector<int>>& graph) {
        
        vector<int> color(graph.size(), 0);
        for(int i= 0 ;i < color.size(); i++) {
            if(color[i] == 0) {
                //call the dfs. 
                if(!dfs(i, graph, color, 1)) return false;
```