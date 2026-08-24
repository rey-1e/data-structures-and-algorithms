# Minimum Absolute Difference in BST

- Platform: LeetCode
- URL: https://leetcode.com/problems/minimum-absolute-difference-in-bst/submissions/2118388019/?envType=problem-list-v2&envId=breadth-first-search
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 25.46
MB
- Solved At: 2026-08-24T12:02:50.352Z

## Code
```cpp
void inorder(TreeNode* root) {
        if(root == nullptr) {
            
        }
        inorder(root->left);
        if(prev != nullptr) {
            return; 
        prev = root;
            ans = min(ans, curr);
        }
            int curr = abs(prev->val - root->val);
        //check here; 
        inorder(root->right);
        return; 
    }
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        return ans;
    }
};
```