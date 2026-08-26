# Shortest and Lexicographically Smallest Beautiful String

- Platform: LeetCode
- URL: https://leetcode.com/problems/shortest-and-lexicographically-smallest-beautiful-string/submissions/2120843513/?envType=daily-question&envId=2026-08-26
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 8.97
MB
- Solved At: 2026-08-26T13:35:44.590Z

## Code
```cpp
class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        
        string ans = "";
        int count = 0; 
        int i = 0; 
        int j = 0; 
        while(j < s.size()) {
            if(s[j] == '1') {
                count++;
            }
            
            while(count == k) {
                //compare for answer;
                if(ans == "") {
                    ans = s.substr(i, j - i + 1);
                } else if (ans.size() > j - i + 1) {
                    ans = s.substr(i, j - i + 1);
                } else if(ans.size() == j - i + 1 && ans > s.substr(i, j - i 
                + 1)) {
                    ans = s.substr(i, j - i + 1);
                }
            
                if(s[i] == '1') count--;
                i++;
                //and reset i to the next 1; 
            }
            j++;
        }
        return ans;
```