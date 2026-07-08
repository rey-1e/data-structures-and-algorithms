# Subset Sums | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/subset-sums2234/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-08T10:40:22.733Z

## Code
```cpp
class Solution {
  public:
    vector<int> ans;
    
    void subsets(int idx, vector<int>& arr, int total, vector<int> temp) {
        //base case; 
        if(idx >= arr.size()) {
            ans.push_back(total);
            return;
        }
        
        
        //inclusion;
        temp.push_back(arr[idx]);
        subsets(idx + 1, arr, total + arr[idx], temp);
        temp.pop_back();
        
        //exclusion;
        subsets(idx + 1, arr, total, temp);
        
        
        
        
    }
  
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        subsets(0, arr, 0, {});
        
        
        return ans;
        
        
    }
};
```