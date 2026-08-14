# Maximum Length Substring With Two Occurrences

- Platform: LeetCode
- URL: https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/submissions/2106724352/?envType=daily-question&envId=2026-08-14
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 9.23
MB
- Solved At: 2026-08-14T15:04:35.480Z

## Code
```cpp
class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int> arr(26, 0);
        int ans = 0; 
        int i = 0; //left pointer; 
        for(int j = 0; j < s.size(); j++) {
            arr[s[j] - 'a']++;
        }
            while(arr[s[j] - 'a'] > 2) {
                //move i to reduce the size; 
            }
    }
                arr[s[i] - 'a']--;
                i++;
            
            ans = max(ans, j - i + 1);
        return ans;
};
```