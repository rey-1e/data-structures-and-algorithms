# Surrounded Regions

- Platform: LeetCode
- URL: https://leetcode.com/problems/surrounded-regions/submissions/2113806305/?envType=problem-list-v2&envId=breadth-first-search
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 14.56
MB
- Solved At: 2026-08-20T10:25:35.220Z

## Code
```cpp
}
                // right edge
                if (j == m - 1 && board[i][j] == 'O') {
                    bfs( i,  j, board);
                }
                // top edge
                if (i == 0 && board[i][j] == 'O') {
                    bfs( i,  j, board);
                }
                // bottom edge
                if (i == n - 1 && board[i][j] == 'O') {
                    bfs( i,  j, board);
                }
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(board[i][j] == '#') {
                    board[i][j] = 'O';
                } else if(board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
            }
        }
                    // dfs or bfs whatever;
                    // bfs for converting all to '#';
                    bfs( i,  j, board);
                // left edge
                if (j == 0 && board[i][j] == 'O') {
                    // do it here;
            for (int j = 0; j < m; j++) {
```