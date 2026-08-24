# Island Perimeter

- Platform: LeetCode
- URL: https://leetcode.com/problems/island-perimeter/submissions/2118376253/?envType=problem-list-v2&envId=breadth-first-search
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 108.68
MB
- Solved At: 2026-08-24T11:48:17.345Z

## Code
```cpp
}
            }
            if(working) break;
        }
        queue<pair<int, int>> q; 
        q.push({startRow, startCol});
        visited[startRow][startCol] = 1; 
        while(!q.empty()) {
            int R = q.front().first;
            int C = q.front().second;
            q.pop();
            int perimeter = 0;
            for(int i = 0; i < 4; i++) {
                int currR = R + row[i];
                int currC = C + col[i];
                //check for surrounding things. 
                if(currR >= 0 && currC >= 0 && currR < n && currC < m) {
                    if(grid[currR][currC] == 0) {
                        perimeter++;
                    } else {
                        if(visited[currR][currC] == 0) {
                            visited[currR][currC] = 1; 
                            q.push({currR, currC});
                        }
                    }
                } else {
                    perimeter++;
                }
            }
```