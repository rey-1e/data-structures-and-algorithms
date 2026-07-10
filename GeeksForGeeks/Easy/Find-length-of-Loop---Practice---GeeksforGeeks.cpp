# Find length of Loop | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/find-length-of-loop/1
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-10T10:13:38.249Z

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
    int lengthOfLoop(Node *head) {
        // code here
        Node* slow = head; 
        Node* fast = head; 
        
        while(fast != nullptr && fast->next != nullptr) {
            
            slow = slow->next; 
            fast = fast->next->next; 
            
            if(slow == fast) {
                //contains loop;
                //find the start of the loop; 
                slow = head; 
                while(slow != fast) {
                    slow = slow->next; 
                    fast = fast->next; 
                }
                
                //both slow and fast are equal and are at the start; 
                //we are the hte start; 
                int count = 1; 
                fast = fast->next; 
                while(slow != fast) {
                    fast = fast->next;
                    count++;
                }
                
                return count;
                
            }
        }
        
        return 0; 
    }
};
```