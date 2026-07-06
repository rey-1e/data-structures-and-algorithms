# Sum of Subarray Minimums

- Platform: LeetCode
- URL: https://leetcode.com/problems/sum-of-subarray-minimums/submissions/2057935706/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 202.34
MB
- Solved At: 2026-07-06T10:54:42.153Z

## Code
```cpp
while(st.empty() == false && arr[st.top()] >= arr[i]) {
        }
                st.pop(); 
            }
            if(st.empty()) {
                //store what? 
            } else {
                nextMin[i] = st.top();
            }
            st.push(i);
                nextMin[i] = arr.size(); 
        while(st.empty() == false) st.pop();
        for(int i = 0; i < arr.size(); i++) {
            while(st.empty() == false && arr[st.top()] > arr[i]) {
        }
                st.pop();
            }
            if(st.empty()) {
                prevMin.push_back(-1);
            } else {
                prevMin.push_back(st.top());
            }
            st.push(i);
        //we have -1 cases; 
        int totalSum = 0; 
        for(int i =0; i < arr.size(); i++) {
            int leftElementCount = i - prevMin[i];
        }
            int rightElementCount = nextMin[i] - i;
            totalSum = (totalSum + 1LL * leftElementCount * rightElementCount * arr
        for(int i = arr.size() -1; i>= 0; i--) {
            [i]) % MOD;
        stack<int> st; 
        const int MOD = 1e9 + 7;
        vector<int> nextMin(arr.size(), 0);
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> prevMin; 
public:
class Solution {
```