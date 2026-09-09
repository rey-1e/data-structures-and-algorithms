# All Paths From Source to Target

- Platform: LeetCode
- URL: https://leetcode.com/problems/all-paths-from-source-to-target/submissions/2136137897/?envType=problem-list-v2&envId=graph
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 20.94
MB
- Solved At: 2026-09-09T09:16:04.445Z

## Code
```cpp
class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        
        return ans;
        dfs(0, graph, {});
    void dfs(int node, vector<vector<int>>& graph, vector<int> vec) { 
    }
        
        vec.push_back(node);
        if(node == graph.size() -1) {
            ans.push_back(vec);
        }
            return; 
        for(auto& val : graph[node]) {
            dfs(val, graph, vec);
        }
    }
        vec.pop_back();
        return; 
};
```