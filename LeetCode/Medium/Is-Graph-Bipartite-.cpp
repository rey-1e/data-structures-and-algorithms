# Is Graph Bipartite?

- Platform: LeetCode
- URL: https://leetcode.com/problems/is-graph-bipartite/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 17.49
MB
- Solved At: 2026-09-07T13:46:39.517Z

## Code
```cpp
bool isBipartite(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> colors(V, -1);
        for (int i = 0; i < V; i++) {
            if (colors[i] == -1) {
                // call the dfs function to color the numbers;
    }
        return true;
        }
            }
            } else if (colors[val] == colors[node]) {
                return false;
                }
                // then it's great;
                if (!dfs(val, graph, !col, colors)) {
                    return false;
                if (!dfs(i, graph, 0, colors)) {
                    return false;
        for (auto& val : graph[node]) {
            if (colors[val] == -1) {
        colors[node] = col;
    bool dfs(int node, vector<vector<int>>& graph, int col,
             vector<int>& colors) {
class Solution {
public:
                }
            }
        }
        return true;
    }
};
```