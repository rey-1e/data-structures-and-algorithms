# Group Anagrams

- Platform: LeetCode
- URL: https://leetcode.com/problems/group-anagrams/submissions/2131130872/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 32.19
MB
- Solved At: 2026-09-04T20:47:41.984Z

## Code
```cpp
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        
        map<vector<int>, vector<int>> m; 
        for(int i = 0; i < strs.size(); i++) {
            //for each character calculate the vector; 
        }
            vector<int> V(26, 0);
            for(auto& c : strs[i]) {
                V[c - 'a']++;
            }
            m[V].push_back(i);
        //the words that yield the same vector are in 
        //one map key; 
        for(auto& [key, vec] : m) {
            vector<string> store; 
        }
                store.push_back(strs[val]);
            }
            for(auto& val : vec) {
            ans.push_back(store);
        return ans;
        vector<vector<string>> ans; 
    }
```