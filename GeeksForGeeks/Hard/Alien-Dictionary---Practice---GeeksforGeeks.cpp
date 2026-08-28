# Alien Dictionary | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/alien-dictionary/1
- Difficulty: Hard
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-28T08:26:56.298Z

## Code
```cpp
class Solution {
  public:
    string findOrder(vector<string> &words) {
        // code here
        unordered_map<char, vector<int>> adj; 
        unordered_map<char, int> indegree; 
        
        for(auto word : words) {
            for(char c : word) {
                indegree[c] = 0; 
            }
        }
        
        
        for(int i = 0; i < words.size() - 1; i++) {
            string st1 = words[i]; 
            string st2 = words[i+1];
            
            int len = min(st1.length(), st2.length());
            
            for(int ptr = 0; ptr < len; ptr++) {
                //check chars; 
                if(st1[ptr] != st2[ptr]) {
                    adj[st1[ptr]].push_back(st2[ptr]);
                    indegree[st2[ptr]]++;
                    break;
                }
            }
        }
        
        queue<char> q; 
        
        for(auto& [key, val] : indegree) {
            if(val == 0) {
                //push into the queue. 
                q.push(key);
            }
        }
        
        string ans = "";
        
        while(!q.empty()) {
```