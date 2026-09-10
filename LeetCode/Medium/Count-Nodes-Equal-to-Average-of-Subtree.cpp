# Count Nodes Equal to Average of Subtree

- Platform: LeetCode
- URL: https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/submissions/2137740423/?envType=daily-question&envId=2026-09-10
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 3 ms
- Memory: 15.85
MB
- Solved At: 2026-09-10T16:55:58.914Z

## Code
```cpp
class Solution {
public:
    int averageOfSubtree(TreeNode* root) {
 * };
 */
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *     TreeNode *left;
 *     TreeNode *right;
    int count =0 ; 
    pair<int, int> traverse(TreeNode* root) {
        if(root == nullptr) {
    }
            return {0, 0};
        }
        auto leftPair = traverse(root->left);
        auto rightPair = traverse(root->right);
        int currSum = leftPair.first + rightPair.first + root->val;
        if(currSum / (leftPair.second + rightPair.second + 1) == root->val) {
            count++;
        }
        return {currSum, leftPair.second + rightPair.second + 1};
        auto temp = traverse(root);
        return count; 
    }       
};
```