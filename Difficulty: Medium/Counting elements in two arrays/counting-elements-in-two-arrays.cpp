class Solution {
  public:
    int fun(int num, vector<int>& b){
        if(b.back() <= num) return b.size();
        if(b.front() > num) return 0;
        int low = 0, high = b.size() - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(b[mid] <= num){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return low;
    }
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        // code here
        sort(b.begin(), b.end());
        vector<int> res;
        for(int ele: a){
            res.push_back(fun(ele, b));
        }
        return res;
    }
};