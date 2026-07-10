# Palindrome Linked List

- Platform: LeetCode
- URL: https://leetcode.com/problems/palindrome-linked-list/submissions/2062745575/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 118.06
MB
- Solved At: 2026-07-10T10:30:00.824Z

## Code
```cpp
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head; 
        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next; 
        }
            fast = fast->next->next; 
        ListNode* head2 = reverse(slow);
    ListNode* reverse(ListNode* head) {
    }
        ListNode* curr = head; 
        ListNode* prev = nullptr; 
        ListNode* next = nullptr; 
        while(curr != nullptr) {
            next = curr->next; 
        }
            curr->next = prev; 
            prev = curr; 
            curr = next; 
        return prev; 
        while(head != nullptr && head2 != nullptr) {
            if(head->val != head2->val) return false;
            head = head->next; 
            head2 = head2->next; 
 */
 * };
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 *     ListNode() : val(0), next(nullptr) {}
 *     int val;
 *     ListNode *next;
 * Definition for singly-linked list.
 * struct ListNode {
/**
```