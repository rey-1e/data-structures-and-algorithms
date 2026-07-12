# Add 1 to a Linked List Number | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-12T16:39:07.538Z

## Code
```cpp
/* Structure of linked list Node
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
    
    Node* reversal(Node* head) {
        Node* curr = head; 
        Node* next = nullptr; 
        Node* prev = nullptr; 
        
        while(curr != nullptr) {
            next = curr->next; 
            curr->next = prev; 
            prev = curr; 
            curr = next; 
        }
        
        
        return prev; 
    }
  
    Node* addOne(Node* head) {
        // code here
        head = reversal(head);
        
        int carry = 1; 
        Node* temp = head; 
        while(temp != nullptr) {
            
            temp->data += carry;
            if (temp->data >= 10) {
                temp->data = 0; 
                carry = 1; 
            } else {
                carry = 0; 
                break;
            }
            
            temp = temp->next;
        }
        
        head = reversal(head);
```