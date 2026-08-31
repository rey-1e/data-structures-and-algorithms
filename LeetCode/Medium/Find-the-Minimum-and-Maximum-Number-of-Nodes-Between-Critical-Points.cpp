# Find the Minimum and Maximum Number of Nodes Between Critical Points

- Platform: LeetCode
- URL: https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/submissions/2126008404/?envType=daily-question&envId=2026-08-31
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 124.65
MB
- Solved At: 2026-08-31T10:57:57.829Z

## Code
```cpp
prevCritical = i;
            }
            //minimum; 
            if(prev->val > temp->val && temp->next->val > temp->val) {
                if(firstCritical == -1) {
                    firstCritical = i; 
                }
                if(prevCritical != -1) {
                minDistance = min(minDistance, i - prevCritical);
                }
                prevCritical = i; 
            }
            i++;
            prev = temp; 
            temp = temp->next; 
        }
        if(minDistance == INT_MAX) {
            return {-1, -1};
        }
        return {minDistance, prevCritical - firstCritical};
    }
};
```