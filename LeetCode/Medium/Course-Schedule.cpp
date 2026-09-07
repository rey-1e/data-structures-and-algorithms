# Course Schedule

- Platform: LeetCode
- URL: https://leetcode.com/problems/course-schedule/submissions/2134106772/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 19.35
MB
- Solved At: 2026-09-07T16:12:20.511Z

## Code
```cpp
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int V = numCourses;
        vector<int> indegree(numCourses, 0);
        for(auto& edge : prerequisites) {
            //bi -> ai;
        }
            adj[edge[1]].push_back(edge[0]);
            indegree[edge[0]]++;
        vector<vector<int>> adj(V);
        for(int i = 0; i < V; i++) {
            if(indegree[i] == 0) {
        }
                q.push(i);
            }
        queue<int> q; 
        
        
        vector<int> ans; 
        while(!q.empty()) {
            auto curr = q.front();
            q.pop();
        }
            ans.push_back(curr);
            for(auto& val : adj[curr]) {
                indegree[val] --;
            }
                if(indegree[val] == 0) {
                    q.push(val);
                }
    }
        if(ans.size() == V) return true;
        return false;
};
```