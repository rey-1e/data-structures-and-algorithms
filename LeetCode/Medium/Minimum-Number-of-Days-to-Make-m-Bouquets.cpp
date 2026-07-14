# Minimum Number of Days to Make m Bouquets

- Platform: LeetCode
- URL: https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/submissions/2067371286/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 23
ms
- Memory: 70.60
MB
- Solved At: 2026-07-14T12:58:16.490Z

## Code
```cpp
class Solution {
public:
    int calculateBouquets(vector<int>& bloomDay, int currDays, int k) {
        int countofBouquets = 0; 
        //update new values; 
        int ans = 0; 
        int curr = 0; 
        for(int i = 0; i < bloomDay.size(); i++) {
            
            if(bloomDay[i] <= currDays) {
                curr++;
            } else {
                ans += curr / k;
                curr = 0; 
            }
        }
        ans += curr / k;
        return ans;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        //base case; 
        if(bloomDay.size() < 1LL * m * k) return -1; 
        //maxNumberofDays; 
        int maxDays = *max_element(bloomDay.begin(), bloomDay.end());
        int st = 1; 
        int end = maxDays;
        int ans = INT_MAX;
        while(st <= end) {
            int mid = st + (end - st) / 2;
            int curr = calculateBouquets(bloomDay, mid, k);
            if(curr >= m) {
                ans = min(ans, mid);
                end = mid - 1; 
            } else {
                st = mid + 1;
```