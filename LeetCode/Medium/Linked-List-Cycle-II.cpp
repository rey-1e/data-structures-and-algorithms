# Linked List Cycle II

- Platform: LeetCode
- URL: https://leetcode.com/problems/linked-list-cycle-ii/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 3 ms
- Memory: 11.21
MB
- Solved At: 2026-07-10T09:32:45.624Z

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
    ListNode *detectCycle(ListNode *head) {
        
        ListNode* slow = head; 
        ListNode* fast = head; 
        while(fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next; 
        }
            slow = slow->next; 
            if(slow == fast) {
                slow = head; 
            }
        return nullptr; 
                while(fast != slow) {
                    slow = slow->next; 
                }
    }
                    fast = fast->next; 
                return slow;
};
```