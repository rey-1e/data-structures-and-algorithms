# Count Greater on Right Queries | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/number-of-nges-to-the-right/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-01T10:53:23.459Z

## Code
```cpp
class Solution {
  public:
    vector<int> countGreater(vector<int> &arr, vector<int> &indices) {
        // code here
        
        vector<int> ans;
        
        for(auto& val : indices) {
            int count = 0; 
            for(int i = val; i < arr.size(); i++) {
                if(i == val) continue;
                
                if(arr[i] > arr[val]) {
                    count++;
                }
            }
            
            ans.push_back(count);
        }
        
        
        return ans;
    }
};
```