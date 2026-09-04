# Remove Duplicates from Sorted List

- Platform: LeetCode
- URL: https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/2131134644/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 16.18
MB
- Solved At: 2026-09-04T20:56:04.411Z

## Code
```cpp
*     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
        ListNode* temp = head; 
        while(temp != nullptr) {
            ListNode* curr = temp->next;
        }
            while(curr != nullptr && curr->val == temp->val) {
                temp->next = curr->next; 
            }
                //delete the curr node; 
                ListNode* delNode = curr; 
                curr = curr->next; 
                delete delNode; 
            temp = temp->next; 
        if(head == nullptr || head->next == nullptr) return 
        head;
```