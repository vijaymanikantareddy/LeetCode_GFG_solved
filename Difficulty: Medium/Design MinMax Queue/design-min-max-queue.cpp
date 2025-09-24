class SpecialQueue {

  public:
    deque<int> dq;
    int mini = INT_MAX, maxi = INT_MIN;
    void enqueue(int x) {
        // Insert element into the queue
        dq.push_back(x);
        mini = min(mini, x);
        maxi = max(maxi, x);
    }

    void dequeue() {
        // Remove element from the queue
        dq.pop_front();
        mini = INT_MAX, maxi = INT_MIN;
        for(auto it: dq){
            mini = min(mini, it);
            maxi = max(maxi, it);
        }
    }

    int getFront() {
        // Get front element
        return dq.front();
    }

    int getMin() {
        // Get minimum element
        return mini;
    }

    int getMax() {
        // Get maximum element
        return maxi;
    }
};