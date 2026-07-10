# Reverse a Doubly Linked List | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-10T08:46:20.877Z

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
        Node* curr = head; 
        
        Node* prev = nullptr; 
        Node* next = nullptr; 
        
        while(curr != nullptr) {
            next = curr->next; 
            curr->next = prev; 
            curr->prev = next; 
            prev = curr; 
            curr = next; 
        }
        
        return prev;
    }
};
```