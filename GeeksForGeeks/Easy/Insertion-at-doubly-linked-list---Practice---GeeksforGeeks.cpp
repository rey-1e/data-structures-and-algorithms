# Insertion at doubly linked list | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-10T05:49:51.652Z

## Code
```cpp
/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;
    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
        // code here
        Node* temp = head; 
        int i = 0; 
        while(true) {
            if(i == p) {
                //we are at an existing node; 
                Node* newNode = new Node(x);
                Node* saveNext = temp->next; 
                
                
                temp->next = newNode;
                newNode->prev = temp;
                
                newNode->next = saveNext;
                if(saveNext) {
                    saveNext->prev = newNode;
                }
                
                break;
            }
                
            temp = temp->next; 
            i++;
        }
        
        return head;
    }
};
```