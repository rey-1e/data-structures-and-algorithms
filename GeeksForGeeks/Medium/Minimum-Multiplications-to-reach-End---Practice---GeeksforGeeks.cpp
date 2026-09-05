# Minimum Multiplications to reach End | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/minimum-multiplications-to-reach-end/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-09-05T09:11:51.682Z

## Code
```cpp
class Solution {
  public:
    int minSteps(vector<int>& arr, int start, int end) {
        // code here
        if(start == end) return 0; 
        
        vector<int> dist(1000, INT_MAX);
        
        queue<pair<int, int>> q; 
        q.push({start, 0});
        
        int mod = 1000;
        dist[start] = 0; 
        
        while(!q.empty()) {
            auto curr = q.front();
            int node = curr.first;
            int steps = curr.second;
            
            q.pop();
            
            for(int i = 0; i < arr.size(); i++) {
                int num = (node * arr[i]) % mod; 
                
                if(num == end) {
                    return steps + 1; 
                }
                
                if(steps + 1 < dist[num]) {
                    dist[num] = steps + 1; 
                    q.push({num, steps + 1});
                }
            }
        }
        
        
        return -1; 
    }
};
```