# Add Two Numbers

- Platform: LeetCode
- URL: https://leetcode.com/problems/add-two-numbers/submissions/2065193543/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 77.27
MB
- Solved At: 2026-07-12T16:37:24.401Z

## Code
```cpp
runner->next = temp;
            runner = runner->next;
            if(sum >= 10) {
                carry = 1; 
            } else carry = 0; 
            
        }
        while(tempL2 != nullptr) {
            int sum = tempL2->val + carry;
            tempL2 = tempL2->next;
            ListNode* temp = new ListNode(sum % 10);
            runner->next = temp;
            runner = runner->next;
            if(sum >= 10) {
                carry = 1; 
            } else carry = 0; 
            
        }
        if(carry != 0) {
            ListNode* temp = new ListNode(carry);
            runner->next = temp;
            runner = runner->next;
        }
        return dummy->next;
    }
};
            ListNode* temp = new ListNode(sum % 10);
            tempL1 = tempL1->next;
```