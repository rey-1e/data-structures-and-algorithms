# Number of Provinces

- Platform: LeetCode
- URL: https://leetcode.com/problems/number-of-provinces/submissions/2133085979/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 19.57
MB
- Solved At: 2026-09-06T16:56:56.354Z

## Code
```cpp
class Solution {
public:
    void dfs(int node, vector<vector<int>>& isConnected, vector<int>& visited) {
        visited[node] = 1; 
        for(int i = 0; i < isConnected.size(); i++) {
            if(visited[i] == 0 && isConnected[node][i] == 1) {
                dfs(i, isConnected, visited);
            }
        }
        return; 
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> visited(n, 0);
        int cnt = 0; 
        for(int i = 0; i < n; i++) {
            if(visited[i] == 0) {
                cnt++;
                //call the dfs function; 
                
            }
        }
        return cnt;
    }
                dfs(i, isConnected, visited);
};
```