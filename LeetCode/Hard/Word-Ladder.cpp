# Word Ladder

- Platform: LeetCode
- URL: https://leetcode.com/problems/word-ladder/submissions/2123891049/
- Difficulty: Hard
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 21.20
MB
- Solved At: 2026-08-29T14:01:01.872Z

## Code
```cpp
//put every word from wordList into the set; 
        unordered_set<string> s(wordList.begin(), wordList.end());
        queue<pair<string, int>> q; 
        q.push({beginWord, 1});
        while(!q.empty()) {
            string word = q.front().first; 
            int level = q.front().second; 
            q.pop();
            for(int i = 0; i < word.size(); i++) {
                char original = word[i]; 
                for(char c = 'a'; c <= 'z'; c++) {
                    word[i] = c; 
                    if(s.find(word) != s.end()) {
                        q.push({word, level + 1});
                        s.erase(word);
                    }
                }
            }
        }
                word[i] = original; 
            //case where it becomes equal to the end word; 
            if(word == endWord) {
                return level;
            }
        
        if(beginWord == endWord) return 0; 
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
```