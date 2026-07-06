# Largest Rectangle in Histogram

- Platform: LeetCode
- URL: https://leetcode.com/problems/largest-rectangle-in-histogram/submissions/2058535143/
- Difficulty: Hard
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 90.63
MB
- Solved At: 2026-07-06T20:39:02.814Z

## Code
```cpp
int largestRectangleArea(vector<int>& heights) {
        vector<int> PSEV = PSE(heights);
        vector<int> NSEV = NSE(heights);
        int ans = 0;
        for(int i = 0; i < heights.size(); i++) {
            int LEFT = i - PSEV[i];
            int RIGHT = NSEV[i] - i;
            ans = max(ans, (LEFT + RIGHT - 1) * heights[i]);
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty()) return 0;
        vector<int> passingVector(matrix[0].size());
        for(int j = 0; j < matrix[0].size(); j++)
            passingVector[j] = matrix[0][j] - '0';
        int ans = largestRectangleArea(passingVector);
        for(int i = 1; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                if(matrix[i][j] == '0')
                    passingVector[j] = 0;
                else
                    passingVector[j] += 1;
            }
            ans = max(ans, largestRectangleArea(passingVector));
        }
        return ans;
    }
};
```