# Middle of the Linked List

- Platform: LeetCode
- URL: https://leetcode.com/problems/middle-of-the-linked-list/submissions/2062668358/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 10.05
MB
- Solved At: 2026-07-10T09:11:50.312Z

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
    ListNode* middleNode(ListNode* head) {
     ListNode* slow = head; 
     ListNode* fast = head;    
    while(fast != nullptr && fast->next != nullptr) {
        slow = slow->next; 
    }
    }
        fast =fast->next->next;
    return slow;
};
```