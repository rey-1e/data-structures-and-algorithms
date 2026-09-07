# Course Schedule II

- Platform: LeetCode
- URL: https://leetcode.com/problems/course-schedule-ii/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 18.58
MB
- Solved At: 2026-09-07T14:00:21.096Z

## Code
```cpp
vector<vector<int>> adj(numCourses);
        for(auto& edge : prerequisites) {
            //bi -> ai; 
        }
            adj[edge[1]].push_back(edge[0]);
        stack<int> st; 
        vector<int> visited(numCourses, 0);
        for(int i =0; i < numCourses; i++) {
            if(visited[i] == 0) {
                //call the dfs function; 
                vector<int> pathVisited(numCourses, 0);
                bool curr = dfs(i, pathVisited, visited, adj, st);
                if(!curr) {
                    return {};
                }
            }
        }
        
        vector<int> ans;
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        //TOPOLOGICAL SORT; 
        //solve with indegrees or a stack;
```