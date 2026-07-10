# Linked List Insertion At Beginning | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/linked-list-insertion-at-beginning/1
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-10T05:18:40.542Z

## Code
```cpp
/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *insertAtFront(Node *head, int x) {
        // Code here
        Node* newNode = new Node(x);
        newNode->next = head;
        head = newNode;
        
        return head;
    }
};
```