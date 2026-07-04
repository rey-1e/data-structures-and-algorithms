# Min Stack

- Platform: LeetCode
- URL: https://leetcode.com/problems/min-stack/submissions/2056264580/?__cf_chl_f_tk=9Jxdtg1K7o78RX4uxxtDqN7peyarUDyqgE_dHRAY5lM-1783199549-1.0.1.1-OgIOTOG4r59jV43CswfJBVOszcEJGd8Q07pgBxFSHms
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 60
ms
- Memory: 150.94
MB
- Solved At: 2026-07-04T21:33:25.355Z

## Code
```cpp
stack<pair<int, int>> st; 
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty()) {
            st.push({value, value});
        } else {
            st.push({value, min(st.top().second, value)});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
class MinStack {
public:
```