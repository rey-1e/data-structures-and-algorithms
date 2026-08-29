# Shortest Transformation Length in a Word List | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/word-ladder/1
- Difficulty: Hard
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-08-29T10:21:27.515Z

## Code
```cpp
class Solution {
  public:
    int wordLadder(vector<string> &words, string &s, string &e) {
        // code here
        //base case; 
        if(s == e) return 0; 
        
        queue<pair<string, int>> q; 
        unordered_set<string> st; 
        
        for(auto word : words) {
            st.insert(word);
        }
        
        
        q.push({s, 1});
        
        while(!q.empty()) {
            string word = q.front().first;
            int level = q.front().second;
            
            q.pop();
            
            if(word == e) {
                return level;
            }
            
            for(int i = 0; i < word.size(); i++) {
                //changes for a word.
                for(char c = 'a'; c <= 'z'; c++) {
                    string duplicate = word; 
                    duplicate[i] = c; 
                    if(st.find(duplicate) != st.end()) {
                        q.push({duplicate, level + 1}); 
                        st.erase(duplicate);
                    }
                }
            }
        }
        
        return 0; 
    }
```