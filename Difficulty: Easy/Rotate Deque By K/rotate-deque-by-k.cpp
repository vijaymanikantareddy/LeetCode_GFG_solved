class Solution {
  public:
    void rotateDeque(deque<int>& dq, int type, int k) {
        // code here
        if(k % dq.size() == 0) return ;
        
        while(k--){
            if(type == 1){
                int ele = dq.back();
                dq.pop_back();
                dq.push_front(ele);
            }else{
                int ele = dq.front();
                dq.pop_front();
                dq.push_back(ele);
            }
        }
    }
};