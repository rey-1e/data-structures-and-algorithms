# All Paths From Source to Target

- Platform: LeetCode
- URL: https://leetcode.com/problems/all-paths-from-source-to-target/submissions/2136131789/?envType=problem-list-v2&envId=graph
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 20.88
MB
- Solved At: 2026-09-09T09:10:13.462Z

## Code
```cpp
class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> visited(graph.size(), 0);
        dfs(0, graph, visited, {});
    void dfs(int node, vector<vector<int>>& graph, vector<int>& visited, vector<int> vec) {
        //base case; 
    }
        for(auto& val : graph[node]) {
            if(visited[val] == 0) {
        }
                dfs(val, graph, visited, vec);
            }
        vec.pop_back();
        visited[node] = 0; 
    }
        return;  
        }
        visited[node] = 1; 
        vec.push_back(node);
            ans.push_back(vec);
            return; 
        if(node == graph.size() -1) {
        return ans;
};
```