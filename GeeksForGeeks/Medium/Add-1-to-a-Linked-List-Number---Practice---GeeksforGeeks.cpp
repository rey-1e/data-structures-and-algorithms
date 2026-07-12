# Add 1 to a Linked List Number | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-12T08:41:52.372Z

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
    
    int helper(Node* head) {
        if(head == nullptr) {
            return 1; 
        }
            
        head->data = head->data + helper(head->next);
        
        if(head->data >= 10) {
            head->data = 0; 
            return 1; 
        } else return 0; 
        
    }
  
    Node* addOne(Node* head) {
        // code here
        Node* temp = head; 
        
        int curr = helper(temp);
        
        if(curr == 1) {
            Node* newNode = new Node(1);
            newNode->next = head; 
            head = newNode;
        }
        
        
        return head; 
    }
};
```