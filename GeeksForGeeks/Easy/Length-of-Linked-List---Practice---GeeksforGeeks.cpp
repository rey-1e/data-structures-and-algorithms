# Length of Linked List | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-10T05:28:22.412Z

## Code
```cpp
/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    int getCount(Node* head) {
        // Code here
        
        if(head == nullptr) return 0; 
        
        int count = 0; 
        Node* temp = head;
        
        while(temp != nullptr) {
            count++;
            temp = temp->next;
        }
        
        return count;
    }
};
```