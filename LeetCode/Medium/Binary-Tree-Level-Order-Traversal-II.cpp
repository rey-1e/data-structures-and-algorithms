# Binary Tree Level Order Traversal II

- Platform: LeetCode
- URL: https://leetcode.com/problems/binary-tree-level-order-traversal-ii/submissions/2105943614/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 15.98
MB
- Solved At: 2026-08-13T20:27:19.752Z

## Code
```cpp
while(!q.empty()) {
            vector<int> temp; 
            int sizee = q.size();
        vector<vector<int>> ans;
            if(curr->left) {
                q.push(curr->left);
            }
            if(curr->right) {
                q.push(curr->right);
            }
            
            //check for left and right; 
            }
            q.pop();
            for(int i = 0; i < sizee; i++) {
            auto curr = q.front();
            temp.push_back(curr->val);
        
        q.push(root);
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
class Solution {
 */
        queue<TreeNode*> q; 
        if(root == nullptr) return {};
```