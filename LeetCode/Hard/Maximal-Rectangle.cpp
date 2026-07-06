# Maximal Rectangle

- Platform: LeetCode
- URL: https://leetcode.com/problems/maximal-rectangle/submissions/2058539091/
- Difficulty: Hard
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 24.74
MB
- Solved At: 2026-07-06T20:47:51.177Z

## Code
```cpp
int LEFT = i - PSEV[i];
            int RIGHT = NSEV[i] - i;
            ans = max(ans, (LEFT + RIGHT - 1) * heights[i]);
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        if(matrix.size() == 0) return 0; 
        //start passing vectors one by one; 
        // vector<char> passingVector;
        int ans = INT_MIN; 
        vector<int> passingVector(matrix[0].size(), 0); 
            for(int j = 0; j < matrix[0].size(); j++) {
                if(matrix[i][j] == '0') {
                    passingVector[j] = 0; 
                }
                passingVector[j] += matrix[i][j] - '0';
            }
            int newCurr = largestRectangleArea(passingVector);
            ans = max(ans, newCurr);
        }
        return ans;
    }
            
        for(int i = 0; i < matrix.size(); i++) {
};
```