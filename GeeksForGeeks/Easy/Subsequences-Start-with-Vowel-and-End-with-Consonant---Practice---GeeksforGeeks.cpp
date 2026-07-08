# Subsequences Start with Vowel and End with Consonant | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/string-subsequence-game5515/1
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-08T10:13:39.786Z

## Code
```cpp
class Solution {
  public:
    set<string> ans;
    
    bool isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u';
    }
    
    void helper(int idx, string& s, string& curr) {
        if(idx >= s.size()) {
            if(!curr.empty() && isVowel(curr.front()) && !isVowel(curr.back())) {
                ans.insert(curr);
            }
            return;
        }
        
        curr += s[idx];
        helper(idx + 1, s, curr);
        curr.pop_back();
        
        //without including; 
        helper(idx + 1, s, curr);
        
        
    }
      
    vector<string> findSubseq(string &s) {
        // code here
        string curr = "";
        helper(0, s, curr);
        
        vector<string> realAns;
        for(auto val : ans) {
            realAns.push_back(val);
        }
        
        return realAns;
        
    }
};
```