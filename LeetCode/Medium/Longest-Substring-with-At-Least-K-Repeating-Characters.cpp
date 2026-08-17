# Longest Substring with At Least K Repeating Characters

- Platform: LeetCode
- URL: https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: N/A
- Solved At: 2026-08-17T16:28:54.508Z

## Code
```cpp
for(int i = 0; i < s.size(); i++) {
            if(st.find(s[i]) != st.end()) continue; 
            vector<int> freq(26, 0);
            int j = i;
            while(j < s.size() && st.find(s[j]) == st.end()) {
                //start a counter; 
                freq[s[j] - 'a']++;
        }
        if(isSmaller == false) {
            return s.size(); 
        }
                j++;
            bool select = true;
            for(auto& val : freq) {
                if(val != 0 && val < k) {
                    select = false;
                    continue;
                }
            }
            if(select) {
                ans = max(ans, j - i);
            }
            }
        return ans;
    }
        }
};
```