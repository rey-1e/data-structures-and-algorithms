# Delete Head of Doubly Linked List | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/delete-head-of-doubly-linked-list/1
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-10T05:52:23.241Z

## Code
```cpp
/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};
*/
Node *deleteHead(Node *head) {
    // Your code here
    Node* newHead = head->next; 
    
    newHead->prev = nullptr; 
    
    head->next = nullptr; 
    Node* temp = head; 
    head = newHead;
    
    delete temp;
    
    
    return head;
    //delete head; 
}
```