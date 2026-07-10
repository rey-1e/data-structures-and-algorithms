# Doubly Linked List from an Array | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/create-a-doubly-linked-list-from-a-given-array/1
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-10T05:33:39.715Z

## Code
```cpp
/* class Node {
  public:
    int data;
    Node* next;
    Node* prev;
    Node(int d) {
        data = d;
        next = nullptr;
        prev = nullptr;
    }
}; */
class Solution {
  public:
    Node* createDLL(vector<int>& arr) {
        // code here
        
        Node* head = nullptr;
        Node* prevPtr = nullptr;
        
        for(int i = 0; i < arr.size(); i++) {
            Node* newNode = new Node(arr[i]);
            newNode->next = nullptr;
            
            if(i == 0) {
                head = newNode;
            }
            
            if(prevPtr != nullptr) {
                prevPtr->next = newNode;
            }
            newNode->prev = prevPtr;
            prevPtr = newNode;
        }
        
        return head; 
        
        
    }
};
```