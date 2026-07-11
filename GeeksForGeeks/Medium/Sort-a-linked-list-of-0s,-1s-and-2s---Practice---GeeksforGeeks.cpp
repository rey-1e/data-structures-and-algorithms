# Sort a linked list of 0s, 1s and 2s | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-11T08:42:17.124Z

## Code
```cpp
/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        int zero = 0; 
        int one = 0; 
        int two = 0; 
        
        Node* temp = head; 
        while(temp != nullptr) {
            if(temp->data == 0) {
                zero++;
            } else if(temp->data == 1) {
                one++;
            } else two++;
            
            temp = temp->next; 
        }
        
        
        temp = head; 
        while(zero--) {
            temp->data = 0; 
            temp = temp->next; 
        }
        while(one--) {
            temp->data = 1; 
            temp = temp->next; 
        }
        while(two--) {
            temp->data = 2; 
            temp = temp->next; 
        }
        
        return head;
    }
};
```