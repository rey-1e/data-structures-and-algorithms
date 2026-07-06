# Next Smaller Element | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/immediate-smaller-element1142/1
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-06T08:09:04.794Z

## Code
```cpp
class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        stack<int> st; 
        vector<int> ans(arr.size(), -1); 
        for(int i = arr.size() -1; i>= 0; i--) {
            while(st.empty() == false && st.top() >= arr[i]) {
                st.pop();
            }
            if(st.empty()) {
                ans[i] = -1; 
            } else {
                ans[i] = st.top();
            }
            
            st.push(arr[i]);
        }
        
        return ans;
    }
};
```