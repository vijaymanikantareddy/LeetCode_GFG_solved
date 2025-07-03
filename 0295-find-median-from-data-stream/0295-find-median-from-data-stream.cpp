class MedianFinder {
public:
    priority_queue<int> maxheap; // left side (1st halft)
    priority_queue<int, vector<int>, greater<>> minheap;    // right side (2nd half)
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        maxheap.push(num);
        minheap.push(maxheap.top());
        maxheap.pop();

        if(maxheap.size() < minheap.size()){
            maxheap.push(minheap.top());
            minheap.pop();
        }
    }
    
    double findMedian() {
        if(maxheap.size() > minheap.size()){
            return maxheap.top();
        }
        return (maxheap.top() + minheap.top()) / 2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */