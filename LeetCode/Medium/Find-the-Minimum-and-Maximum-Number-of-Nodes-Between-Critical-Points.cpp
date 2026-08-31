# Find the Minimum and Maximum Number of Nodes Between Critical Points

- Platform: LeetCode
- URL: https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/submissions/2126002773/?envType=daily-question&envId=2026-08-31
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 128.48
MB
- Solved At: 2026-08-31T10:51:38.486Z

## Code
```cpp
vector<int> nodesBetweenCriticalPoints(ListNode* head) {
            
        if(head == nullptr || head->next == nullptr) return {-1, -1};
        
        vector<int> criticalPoints;
        ListNode* prev = head; 
        ListNode* temp = head->next; 
        int i = 1; 
        while(temp != nullptr && temp->next != nullptr) {
            //maximum;
            if(prev->val < temp->val && temp->next->val < temp->val) {
                criticalPoints.push_back(i);
            }
            //minimum; 
            if(prev->val > temp->val && temp->next->val > temp->val) {
                criticalPoints.push_back(i);
            }
            i++;
            temp = temp->next; 
        }
            prev = temp; 
        int maxDistance = INT_MIN; 
        int minDistance = INT_MAX;
        if(criticalPoints.size() <= 1) {
            return {-1, -1};
        }
        
        maxDistance = criticalPoints.back() - criticalPoints[0];
```