# Linked List Cycle

- Platform: LeetCode
- URL: https://leetcode.com/problems/linked-list-cycle/submissions/2062680613/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 11.76
MB
- Solved At: 2026-07-10T09:23:42.230Z

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
    bool hasCycle(ListNode *head) {
        
        ListNode* slow = head; 
        ListNode* fast = head; 
        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next; 
        }
    }
        return false;
            if(fast == slow) return true;
            fast = fast->next->next;
};
```