# Prerequisite Tasks | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/prerequisite-tasks/1
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-22T07:37:09.351Z

## Code
```cpp
class Solution {
  public:
    bool isPossible(int n, vector<pair<int, int>>& pre) {
        // code here
        vector<int> indegree(n);
        
        vector<vector<int>> adj(n); 
        for(auto val : pre) {
            adj[val.second].push_back(val.first);
            indegree[val.first]++;
        }
        
        int count = 0; 
        queue<int> q; 
        
        for(int i = 0; i < indegree.size(); i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }
        
        while(!q.empty()) {
            int curr = q.front();
            q.pop();
            
            count++;
            for(auto val : adj[curr]) {
                indegree[val]--;
                
                if(indegree[val] == 0) {
                    q.push(val);
                }
            }
        }
        
        
        
        return (count == n); 
        
        
        
    }
```