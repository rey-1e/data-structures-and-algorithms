# Queue Using Array | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/implement-queue-using-array/1
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-07-04T21:34:26.810Z

## Code
```cpp
class myQueue {
  private: 
    vector<int> arr; 
    int maxSize; 
  public:
    myQueue(int n) {
        // Define Data Structures
        maxSize = n; 
        
    }
    bool isEmpty() {
        // check if the queue is empty
        return (arr.size() == 0);
    }
    bool isFull() {
        // check if the queue is full
        return arr.size() == maxSize;
    }
    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
        arr.push_back(x);
    }
    void dequeue() {
        // Removes the front element of the queue.
        if(arr.size() > 0) {
            arr.erase(arr.begin() + 0);
        }
    }
    int getFront() {
        // Returns the front element of the queue.
        return (arr.size() > 0) ? arr[0] : -1;
    }
    int getRear() {
        // Return the last element of queue
        return (arr.size() > 0) ? arr[arr.size() -1] : -1;
    }
};
```