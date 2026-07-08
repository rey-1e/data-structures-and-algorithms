# Subsequence with Sum K | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/check-if-there-exists-a-subsequence-with-sum-k/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-08T09:53:34.873Z

## Code
```cpp
class Solution {
  public:
  
    void helper(int idx, vector<int>& arr, int k, bool& ans) {
        if(k == 0) {
            ans = true;
            return;
        } else if(k < 0) {
            return; 
        }
        
        if(idx >= arr.size()) {
            return;
        }
        
        if(!ans) {
            k -= arr[idx];
            helper(idx + 1, arr, k, ans);
            k += arr[idx];
        }
        
        if(!ans) {
            helper(idx + 1, arr, k, ans);
        }
    }
  
    bool checkSubsequenceSum(vector<int>& arr, int k) {
        // Code here
        bool ans = false;
        helper(0, arr, k, ans);
        
        
        
        return ans;
    }
};
```