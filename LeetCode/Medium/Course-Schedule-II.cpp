# Course Schedule II

- Platform: LeetCode
- URL: https://leetcode.com/problems/course-schedule-ii/submissions/2133956112/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 18.58
MB
- Solved At: 2026-09-07T13:59:32.577Z

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
        //solve with indegrees or a stack; 
        //TOPOLOGICAL SORT; 
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        return true; 
            }
        }
        pathVisited[node] = 0; 
        st.push(node);  
            } else if(pathVisited[val] == 1) {
                return false;
                if(!dfs(val, pathVisited, visited, adj, st)) return false;
                //call the dfs; 
        for(auto& val : adj[node]) {
            if(visited[val] == 0) {
        pathVisited[node] = 1; 
        visited[node] = 1; 
    bool dfs(int node, vector<int>& pathVisited, vector<int>& visited, vector<vector<int>>& adj, stack<int>& st) 
    {
class Solution {
public:
```