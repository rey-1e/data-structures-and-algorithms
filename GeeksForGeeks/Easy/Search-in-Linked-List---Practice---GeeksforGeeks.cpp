# Search in Linked List | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/search-in-linked-list-1664434326/1
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-10T05:30:07.705Z

## Code
```cpp
/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
}; */
class Solution {
  public:
    bool searchKey(Node* head, int key) {
        // Code here
        if(head == nullptr) return false;
        
        Node* temp = head;
        while(temp != nullptr) {
            if(temp->data == key) {
                return true;
            }
            temp = temp->next;
        }
        
        
        return false;
    }
};
```