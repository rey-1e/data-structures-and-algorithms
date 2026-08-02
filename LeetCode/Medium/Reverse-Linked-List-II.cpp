# Reverse Linked List II

- Platform: LeetCode
- URL: https://leetcode.com/problems/reverse-linked-list-ii/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 11.21
MB
- Solved At: 2026-08-02T15:48:54.484Z

## Code
```cpp
vector<int> arr; 
        int i = 1; 
        while(true) {
        }   
            if(i == left) {
                start = temp; 
            }
                    arr.push_back(temp->val);
                }
                    temp = temp->next; 
                    i++;
            i++;
            temp = temp->next; 
                break;
        ListNode* temp = head; 
        ListNode* start = nullptr; 
                while(i <= right) {
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
```