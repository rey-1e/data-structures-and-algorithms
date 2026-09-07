# Word Ladder

- Platform: LeetCode
- URL: https://leetcode.com/problems/word-ladder/
- Difficulty: Hard
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 21.40
MB
- Solved At: 2026-09-07T12:42:24.547Z

## Code
```cpp
queue<pair<string, int>> q; 
        q.push({beginWord, 1});
        unordered_set<string> s(wordList.begin(), wordList.end());
        while(!q.empty()) {
            auto curr = q.front();
        }
            string word = curr.first;
            int steps = curr.second;
            //traverse over the word; 
            for(int it = 0; it < word.size(); it++) {
                char original = word[it];
            }
                for(char c = 'a'; c <= 'z'; c++) {
                    word[it] = c; 
                }
                    if(s.find(word) != s.end()) {
                        //we have found a word in the set; 
                    }
                        q.push({word, steps + 1});
                        s.erase(word);
                word[it] = original;
            if(word == endWord) {
                return steps;
            }
    }       
            q.pop();
        return 0; 
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
public:
class Solution {
};
```