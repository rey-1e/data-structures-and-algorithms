# Find Eventual Safe States

- Platform: LeetCode
- URL: https://leetcode.com/problems/find-eventual-safe-states/submissions/2134200244/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 70.95
MB
- Solved At: 2026-09-07T17:20:12.408Z

## Code
```cpp
vector<vector<int>> adj(graph.size());
        vector<int> indegree(graph.size(), 0);
        for(int i = 0; i < graph.size(); i++){ 
            //val has multiple nodes; 
            for(auto& element : val) {
                adj[element].push_back(i);
            }
                indegree[i]++;
        queue<int> q; 
        for(int i = 0; i < indegree.size(); i++) {
            if(indegree[i] == 0) {
        }
                q.push(i);
            }
        while(!q.empty()) {
            int curr = q.front();
        }
            q.pop();    
            for(auto& val : adj[curr]) {
                indegree[val]--;
            }
                if(indegree[val] == 0) {
                    q.push(val);
                }
    }
            ans.push_back(curr);
        vector<int> ans; 
        sort(ans.begin(), ans.end());
        return ans; 
        }
            auto val = graph[i];
};
```