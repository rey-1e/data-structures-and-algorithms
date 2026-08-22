# Course Schedule II | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/course-schedule/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-22T09:13:12.690Z

## Code
```cpp
class Solution {
  public:
    vector<int> findOrder(int n, vector<vector<int>> &prerequisites) {
        // code here
        vector<int> indegree(n);
        
        vector<vector<int>> adj(n);
        
        for(auto edge : prerequisites) {
            adj[edge[1]].push_back(edge[0]);  
            indegree[edge[0]]++;
        }
        
        vector<int> ans; 
        queue<int> q; 
        
        for(int i= 0; i < n; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }
        
        while(!q.empty()) {
            int curr = q.front();
            q.pop();
            
            ans.push_back(curr);
            
            for(auto val : adj[curr]) {
                indegree[val]--;
                if(indegree[val] == 0) {
                    q.push(val);
                }
            }
        }
        
        if(ans.size() != n) return {};
        
        return ans;
        
    }
};
```