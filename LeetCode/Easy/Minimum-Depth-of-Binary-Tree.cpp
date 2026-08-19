# Minimum Depth of Binary Tree

- Platform: LeetCode
- URL: https://leetcode.com/problems/minimum-depth-of-binary-tree/submissions/2113025207/?envType=problem-list-v2&envId=breadth-first-search
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 146.63
MB
- Solved At: 2026-08-19T17:24:31.899Z

## Code
```cpp
public:
    int helper(TreeNode* root) {
        if(root == nullptr) {
            return 0; 
        }
        int leftHeight = helper(root->left);
        int rightHeight = helper(root->right);
        int val;
        if(leftHeight && rightHeight) {
            val = min(leftHeight, rightHeight) + 1; 
        } else if(leftHeight) {
            val = leftHeight + 1; 
        } else val = rightHeight + 1; 
        
        return val; 
    } 
    int minDepth(TreeNode* root) {
        
        return helper(root);
    }
};
 (right) {}
 * };
 */
class Solution {
```