# Alien Dictionary | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/alien-dictionary/1
- Difficulty: Hard
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-23T09:44:54.916Z

## Code
```cpp
class Solution {
  public:
    string findOrder(vector<string> &words) {
        // code here
        unordered_map<int, vector<int>> adj;
        unordered_map<int, int> indegree;
        
        for (auto &word : words) {
            for (char c : word) {
                indegree[c - 'a'] = 0;
            }
        }
        
        for(int i = 0; i < words.size(); i++) {
            if(i == words.size() -1) break;
            
            int j = i + 1; 
            
            for(int k = 0; k < min(words[i].size(), words[j].size()); k++) {
                if(words[i][k] != words[j][k]) {
                    adj[words[i][k] - 'a'].push_back(words[j][k] - 'a');
                    indegree[words[j][k] - 'a']++;
                    break;
                }
            }
        }
        
        string ans = "";
        
        queue<int> q; 
        for(auto& [key, val] : indegree) {
            if(val == 0) {
                q.push(key);
            }
        }
        
        while(!q.empty()) {
            int curr = q.front();
            q.pop();
            ans += (char)('a' + curr);
            
            for(auto val : adj[curr]) {
```