# Word Search

- Platform: LeetCode
- URL: https://leetcode.com/problems/word-search/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 11.71
MB
- Solved At: 2026-07-08T15:57:48.131Z

## Code
```cpp
// Check left
        if (j - 1 >= 0 && board[i][j - 1] == word[idx]) {
            char curr = board[i][j - 1];
            board[i][j - 1] = '#';
            if (doesExist(idx, i, j - 1, board, word)) {
                board[i][j - 1] = curr;
                return true;
            }
            board[i][j - 1] = curr;
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] != word[0])
                    continue;
                char curr = board[i][j];
                board[i][j] = '#';
                bool found = doesExist(0, i, j, board, word);
                board[i][j] = curr;
                if (found)
                    return true;
            }
        }
        return false;
    }
};
```