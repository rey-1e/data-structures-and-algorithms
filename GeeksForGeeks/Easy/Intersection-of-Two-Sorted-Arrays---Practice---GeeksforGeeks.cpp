# Intersection of Two Sorted Arrays | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/intersection-of-two-sorted-arrays-with-duplicate-elements/1
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-09-22T18:55:48.993Z

## Code
```cpp
class Solution {
    public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        // code here
        int i = 0, j = 0;
        
        vector<int> ans;
        
        while (i < a.size() && j < b.size()) {
            if (a[i] < b[j]) { 
                i++;
            } else if (a[i] > b[j]) { j++;
            } else {
                ans.push_back(a[i]);
                while (i < a.size() && a[i] == ans.back())
                    i++;
                while (j < b.size() && b[j] == ans.back())
                    j++;
        }
    }
    
    return ans;
}
};
```