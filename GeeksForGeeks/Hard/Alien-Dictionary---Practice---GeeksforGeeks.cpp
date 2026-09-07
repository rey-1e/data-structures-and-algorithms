# Alien Dictionary | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/alien-dictionary/1
- Difficulty: Hard
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-09-07T17:47:07.501Z

## Code
```cpp
class Solution {
  public:
    string findOrder(vector<string> &words) {
        // code here
        vector<int> indegree(26, -1);
        for(auto& word : words) {
            for(auto& c : word) {
                indegree[c - 'a'] = 0; 
            }
        }
        int final = 0; 
        for(int i = 0; i < indegree.size(); i++) {
            if(indegree[i] == 0) {
                final++;
            }
        }
        
        vector<vector<int>> adj(26);
        
        for(int i = 0; i < words.size() -1; i++) {
            string s1 = words[i];
            string s2 = words[i+1];
            
            int len = min(s1.length(), s2.length());
            
            for(int j = 0; j < len; j++) {
                if(s1[j] != s2[j]) {
                    //we know that s1[j] occurs before s2[j];
                    adj[s1[j] - 'a'].push_back(s2[j] - 'a');
                    indegree[s2[j] - 'a']++;
                    break;
                    
                }
            }
        }
        
        queue<int> q; 
        for(int i = 0; i < indegree.size(); i++ ){
            if(indegree[i] == 0) {
                q.push(i);
            }
        }
        
        string ans = "";
        while(!q.empty()) {
```