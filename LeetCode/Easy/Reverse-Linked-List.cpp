# Reverse Linked List

- Platform: LeetCode
- URL: https://leetcode.com/problems/reverse-linked-list/submissions/2062675507/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 13.43
MB
- Solved At: 2026-07-10T09:18:53.493Z

## Code
```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
    void helper(ListNode*& curr, ListNode*& prev, ListNode*& next) {
        if(curr == nullptr) return; 
    }
    }
        curr->next = prev; 
        prev = curr; 
        next = curr->next; 
        curr = next; 
        helper(curr, prev, next);
        helper(curr, prev, next);
        return prev; 
        ListNode* prev = nullptr; 
        ListNode* next = nullptr; 
        ListNode* curr = head; 
};
```