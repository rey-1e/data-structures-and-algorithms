# Reorder List

- Platform: LeetCode
- URL: https://leetcode.com/problems/reorder-list/submissions/2124770648/?envType=problem-list-v2&envId=stack
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 22.79
MB
- Solved At: 2026-08-30T07:26:02.328Z

## Code
```cpp
ListNode* LL2 = slow->next; 
        slow->next = nullptr; 
        //reverse LL2; 
        ListNode* c2 = reverse(LL2);
        ListNode* c1 = head; 
        while(c1 != nullptr && c2 != nullptr) {
            ListNode* n1 = c1->next; 
            c1->next = c2; 
            ListNode* n2 = c2->next; 
            c1 = n1; 
            c2->next = n1; 
        }
            slow = slow->next; 
            fast = fast->next->next; 
        while(fast != nullptr && fast->next != nullptr) {
        ListNode* slow = head; 
        ListNode* fast = head; 
        //base case; 
        if(head == nullptr || head->next == nullptr) return; 
    void reorderList(ListNode* head) {
        
    }
        return prev;
```