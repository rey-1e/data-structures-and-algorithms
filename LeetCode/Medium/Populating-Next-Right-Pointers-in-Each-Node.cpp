# Populating Next Right Pointers in Each Node

- Platform: LeetCode
- URL: https://leetcode.com/problems/populating-next-right-pointers-in-each-node/submissions/2123150729/?envType=problem-list-v2&envId=breadth-first-search
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 19.41
MB
- Solved At: 2026-08-28T17:41:56.707Z

## Code
```cpp
queue<Node*> q; 
        q.push(root);
        while(!q.empty()) {
            int sizee = q.size();
                if(i == sizee - 1) {
                q.pop();
                    curr->next = nullptr; 
                } else {
            for(int i = 0; i < sizee; i++) {
                
                Node* curr = q.front();
                
                    curr->next = q.front();
                }
                if(curr->left) {
                    q.push(curr->left);
                }
                if(curr->right) {
public:
    Node* connect(Node* root) {
class Solution {
};
*/
    _next)
        : val(_val), left(_left), right(_right), next
        (_next) {}
        if(root == nullptr) return root;
```