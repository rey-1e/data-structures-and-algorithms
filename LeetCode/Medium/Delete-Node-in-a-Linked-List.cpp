# Delete Node in a Linked List

- Platform: LeetCode
- URL: https://leetcode.com/problems/delete-node-in-a-linked-list/submissions/2062446306/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 12.21
MB
- Solved At: 2026-07-10T05:26:53.682Z

## Code
```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
    }
        node->next = node->next->next;
};
```