# Surrounded Regions

- Platform: LeetCode
- URL: https://leetcode.com/problems/surrounded-regions/submissions/2133830432/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 14.44
MB
- Solved At: 2026-09-07T11:39:07.904Z

## Code
```cpp
void solve(vector<vector<char>>& board) {
        
        int n = board.size(); 
        int m = board[0].size();
        return; 
    }
        }
                   }
            }
                    q.push({R, C});
                   && board[R][C] == 'O') {
                    board[R][C] = '#'; //mark visited; 
                int C = col + delCol[i]; 
                if(R >= 0 && C >= 0 && R < board.size() && C < board[0].size()
            q.pop();
            for(int i = 0; i < 4; i++) {
                int R = row + delRow[i]; 
            int row = node.first;
            int col = node.second;
        while(!q.empty()) {
            auto node = q.front();
        int delRow[] = {0, -1, 0, +1};
        int delCol[] = {-1, 0, +1, 0};
        queue<pair<int, int>> q; 
        q.push({i, j});
        board[i][j] = '#';
class Solution {
public:
    void convert(int i, int j, vector<vector<char>>& board) {
```