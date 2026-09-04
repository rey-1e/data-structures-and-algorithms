# Group Anagrams

- Platform: LeetCode
- URL: https://leetcode.com/problems/group-anagrams/submissions/2131131828/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 31.84
MB
- Solved At: 2026-09-04T20:49:43.872Z

## Code
```cpp
map<vector<int>, vector<string>> m; 
        for(int i = 0; i < strs.size(); i++) {
            //for each character calculate the vector; 
        }
            vector<int> V(26, 0);
            for(auto& c : strs[i]) {
                V[c - 'a']++;
            }
            m[V].push_back(strs[i]);
        //the words that yield the same vector are in 
        //one map key; 
        for(auto& [key, vec] : m) {
        }
            ans.push_back(vec);
        return ans;
        vector<vector<string>> ans; 
    }
};
    {
        
    vector<vector<string>> groupAnagrams(vector<string>& strs)
```