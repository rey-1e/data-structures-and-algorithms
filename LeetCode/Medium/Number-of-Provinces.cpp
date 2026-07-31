# Number of Provinces

- Platform: LeetCode
- URL: https://leetcode.com/problems/number-of-provinces/submissions/2088660132/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 19.80
MB
- Solved At: 2026-07-31T10:22:03.147Z

## Code
```cpp
int findCircleNum(vector<vector<int>>& isConnected) {
        
        vector<int> v(isConnected.size(), 0);
        int count = 0; 
        for(int i = 0; i < v.size(); i++) {
            if(v[i] == 0) {
                count++;
                bfs(i, isConnected, v);
    }
        while(!q.empty()) {
            int curr = q.front();
        }
            q.pop();
            for(int i = 0; i < isConnected.size(); i++) {
                if(isConnected[curr][i] == 1 && !v[i]) {
            }
                    q.push(i);
                }
                    v[i] = 1; 
        return; 
        q.push(start);
        v[start] = 1; 
        queue<int> q; 
            }
        }
```