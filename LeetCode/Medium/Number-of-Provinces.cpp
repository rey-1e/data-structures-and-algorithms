# Number of Provinces

- Platform: LeetCode
- URL: https://leetcode.com/problems/number-of-provinces/submissions/2088585297/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 20.02
MB
- Solved At: 2026-07-31T09:14:49.659Z

## Code
```cpp
//..
        // count the number of total traversals;
        int count = 0;
        vector<int> visited(isConnected.size(), 0);
        for (int i = 0; i < visited.size(); i++) {
            // bfs;
            queue<int> q;
            q.push(i);
            if (visited[i] == 1) {
                continue;
            }
            visited[i] = 1;
            while (!q.empty()) {
                int curr = q.front();
                q.pop();
                for (int j = 0; j < isConnected.size(); j++) {
                    if (isConnected[curr][j] == 1 && !visited[j]) {
                }
                        visited[j] = 1;
                    }
            count++;
        // traversal from the next unvisited node to the entire comopnent.
        //..
        //..
        // traversal from first unvisited node to the entire component.
            }
        }
        return count;
                        q.push(j);
    }
};
```