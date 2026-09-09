# Minimum Multiplications to reach End | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/minimum-multiplications-to-reach-end/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-09-09T08:59:37.576Z

## Code
```cpp
class Solution {
  public:
    int minSteps(vector<int>& arr, int start, int end) {
        // code here
        if(start == end) return 0; 
        
        queue<pair<int, int>> q; 
        q.push({0, start});
        
        vector<int> dist(1000, INT_MAX);
        dist[start] = 0; 
        
        int mod = 1000;
        
        while(!q.empty()) {
            auto curr = q.front();
            q.pop();
            int steps = curr.first;
            int value = curr.second;
            
            for(int i = 0; i < arr.size();i ++) {
                int num = (value * arr[i]) % mod; 
                
                if(num == end) {
                    return steps + 1; 
                }
                
                if(steps + 1 < dist[num]) {
                    dist[num] = steps + 1; 
                    q.push({steps + 1, num});
                    
                }
                
            }
        }
        
        return -1; 
    }
};
```