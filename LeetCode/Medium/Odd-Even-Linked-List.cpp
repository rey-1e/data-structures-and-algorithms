# Odd Even Linked List

- Platform: LeetCode
- URL: https://leetcode.com/problems/odd-even-linked-list/submissions/2062855284/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 15.46
MB
- Solved At: 2026-07-10T12:46:19.504Z

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
    ListNode* oddEvenList(ListNode* head) {
        //base case; 
        if(head == nullptr || head->next == nullptr || head->next->next == nullptr) return head;
        ListNode* odd = head; 
        ListNode* even = head->next; 
        ListNode* saveOdd = odd;
        while(even != nullptr && even->next != nullptr) {
            
            odd->next = odd->next->next;
            odd = odd->next; 
        ListNode* saveEven = even;
        }
            even = even->next; 
        
            even->next = even->next->next;
            if(odd != nullptr && odd->next != nullptr) {
            }
            
            if(even != nullptr && even->next != nullptr) {
            }
        odd->next = saveEven;
        return saveOdd;
    }
};
```