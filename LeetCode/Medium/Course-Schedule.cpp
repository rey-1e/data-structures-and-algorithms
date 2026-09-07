# Course Schedule

- Platform: LeetCode
- URL: https://leetcode.com/problems/course-schedule/submissions/2133804935/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 19.42
MB
- Solved At: 2026-09-07T11:05:18.375Z

## Code
```cpp
}
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        //find if there exists a cycle;
            //if cycle exists -> this is not a DAG -> toposort cannot be applied -> no fulfillment.
        //create a graph; 
        int V = numCourses;
        vector<vector<int>> adj(V);
        for(auto& edge : prerequisites) {
            adj[edge[1]].push_back(edge[0]);
        }
        vector<int> visited(V, 0);
        vector<int> pathVisited(V, 0);
        for(int i = 0; i < V; i++) {
        pathVisited[node] = 0; 
        return false;
            if(visited[i] == 0) {
                return true; // we have found a cycle; 
            }
        }
            if(visited[val] == 0) {
                if(dfs(val, visited, pathVisited, adj)) {
                    return true;
                }
            } else if(pathVisited[val] == 1) {
        for(auto& val : adj[node]) {
class Solution {
public:
    bool dfs(int node, vector<int>& visited, vector<int>& pathVisited, vector<vector<int>>& adj) {
        visited[node] = 1; 
        pathVisited[node] = 1;
```