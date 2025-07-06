class Solution {
  public:
    priority_queue<int> maxheap;
    priority_queue<int, vector<int>, greater<>> minheap;
    
    double findMedian(int num){
        maxheap.push(num);
        minheap.push(maxheap.top());
        maxheap.pop();
        
        if(minheap.size() > maxheap.size()){
            maxheap.push(minheap.top());
            minheap.pop();
        }
        if(maxheap.size() > minheap.size()) return maxheap.top();
        
        return (maxheap.top() + minheap.top())/2.0; 
    }
    vector<double> getMedian(vector<int> &arr) {
        // code here
        vector<double> res;
        for(int i = 0 ; i < arr.size() ; i++){
            res.push_back(findMedian(arr[i]));
        }
        return res;
    }
};
