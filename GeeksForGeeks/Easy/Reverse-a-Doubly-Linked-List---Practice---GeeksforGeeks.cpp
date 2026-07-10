# Reverse a Doubly Linked List | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-10T07:07:02.919Z

## Code
```cpp
/* Structure of doubly linked list node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};
*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        Node* start = head;
        Node* end = head; 
        
        while(end->next != nullptr) {
            end = end->next; 
        }
        
        while(start != end && end->next != start && start->prev != end) {
            swap(end->data, start->data);
            end = end->prev; 
            start = start->next;
        }
        
        return head;
    }
};
```