# Intersection of Two Linked Lists

- Platform: LeetCode
- URL: https://leetcode.com/problems/intersection-of-two-linked-lists/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-12T16:39:22.994Z

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if(!headA || !headB) return nullptr; 
     ListNode* a = headA; 
     ListNode* b = headB; 
     while(a != b) {
        a = (a == nullptr) ? headB : a->next; 
        b = (b == nullptr) ? headA : b->next; 
     }
    return a; 
    }
};
```