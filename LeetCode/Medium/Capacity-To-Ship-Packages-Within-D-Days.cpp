# Capacity To Ship Packages Within D Days

- Platform: LeetCode
- URL: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/submissions/2067434123/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 35.14
MB
- Solved At: 2026-07-14T13:58:02.720Z

## Code
```cpp
maxShipWeight += weight;
        }
        int currMaxElement = *max_element(weights.begin(), weights.end());
        int st = currMaxElement;
        int end = maxShipWeight;
        int ans = INT_MAX;
            int mid = st + (end - st) / 2;
        while (st <= end) {
            // calculate mid;
            int currDays = calculateDays(weights, mid);
        for (auto& weight : weights) {
        int maxShipWeight = 0;
            currDays++;
        }
    int shipWithinDays(vector<int>& weights, int days) {
    }
        return currDays;
        if (curr != 0) {
        }
            }
                currDays++;
            } else {
                curr = weights[i];
            if (currDays <= days) {
                curr += weights[i];
            if (curr + weights[i] <= currMaxWeight) {
                ans = min(ans, mid); // mid is weight;
                end = mid - 1;
            } else {
                return INT_MAX;
            if (weights[i] > currMaxWeight)
        for (int i = 0; i < weights.size(); i++) {
        int curr = 0;
        int currDays = 0;
    int calculateDays(vector<int>& weights, int currMaxWeight) {
```