# Populating Next Right Pointers in Each Node II

- Platform: LeetCode
- URL: https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/submissions/2123160871/?envType=problem-list-v2&envId=breadth-first-search
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 18.90
MB
- Solved At: 2026-08-28T17:50:57.390Z

## Code
```cpp
while(!q.empty()) {
            int levelSize = q.size();
            for(int i = 0; i < levelSize; i++) {
                
                    curr->next = nullptr; 
                } else {
                if(i == levelSize -1) {
                Node* curr = q.front();
                q.pop();
                    curr->next = q.front();
                }
                if(curr->left) {
                    q.push(curr->left);
                }
        q.push(root);
        queue<Node*> q; 
        if(root == nullptr) return root;
class Solution {
public:
    Node* connect(Node* root) {
*/
        (_next) {}
};
    _next)
        : val(_val), left(_left), right(_right), next
```