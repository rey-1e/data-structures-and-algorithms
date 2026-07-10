# Reverse Linked List

- Platform: LeetCode
- URL: https://leetcode.com/problems/reverse-linked-list/submissions/2062670805/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 13.30
MB
- Solved At: 2026-07-10T09:14:17.873Z

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
        
        ListNode* curr = head; 
        ListNode* prev = nullptr;
        ListNode* next = nullptr; 
        while(curr != nullptr) {
            next = curr->next; 
        }
    }
            curr->next = prev; 
            prev = curr; 
            curr = next;
        return prev; 
};
```