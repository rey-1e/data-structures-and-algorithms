# Generate all binary strings | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/generate-all-binary-strings/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-08T09:40:37.090Z

## Code
```cpp
class Solution {
  public:
    vector<string> ans;
    
    void helper(int idx, int n, string curr) {
        //base case; 
        if(idx >= n) {
            ans.push_back(curr);
            return; 
        } 
        
        helper(idx + 1, n, curr);
        
        curr[idx] = '1';
        helper(idx + 1, n, curr);
        curr[idx] = '0'; 
        
        return; 
        
    }
  
    vector<string> binstr(int n) {
        // code here
        string curr = "";
        for(int i = 0; i < n; i++) {
            curr += '0';
        }
        helper(0, n, curr);
        
        
        return ans;
    }
};
```