# Asteroid Collision

- Platform: LeetCode
- URL: https://leetcode.com/problems/asteroid-collision/submissions/2057972786/
- Difficulty: Unknown
- Language: C++
- Status: Accepted
- Runtime: 0
ms
- Memory: 22.12
MB
- Solved At: 2026-07-06T11:35:42.183Z

## Code
```cpp
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st; 
        for(int i = 0; i < asteroids.size(); i++) {
            bool isAlive = true;
            while(!st.empty() && (st.top() > 0 && asteroids[i] < 0)) {
                
                if(-asteroids[i] > st.top()) {
                    st.pop();
                } else if( -asteroids[i] == st.top()) {
                    isAlive = false;
                    st.pop();
                    break;
                } else {
                    isAlive = false;
                    break;
                }    
            }
            if(isAlive) {
                st.push(asteroids[i]);
            }
        }
        vector<int> ans(st.size(), 0);
        int i = ans.size() -1; 
        while(st.empty() == false) {
            ans[i--] = st.top();
            st.pop();
        }
        return ans;
    }
};
```