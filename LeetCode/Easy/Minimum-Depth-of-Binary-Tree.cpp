# Minimum Depth of Binary Tree

- Platform: LeetCode
- URL: https://leetcode.com/problems/minimum-depth-of-binary-tree/submissions/2113031776/?envType=problem-list-v2&envId=breadth-first-search
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 146.94
MB
- Solved At: 2026-08-19T17:28:30.499Z

## Code
```cpp
public:
    int minDepth(TreeNode* root) {
            //using the minimum depth approach; 
class Solution {
        queue<TreeNode*> q; 
        q.push(root);
        int count = 0; 
        while(!q.empty()) {
            count++;
            int currSize = q.size();
                q.pop();
            for(int i = 0; i < currSize; i++) {
                TreeNode* curr = q.front();
                if(curr->left) {
                if(curr->left == nullptr && curr->right == nullptr) {
                    return count; 
                }
 (right) {}
 * };
 */
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
/**
        if(root == nullptr) return 0; 
            
                    q.push(curr->left);
```