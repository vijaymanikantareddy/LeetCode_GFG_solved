class Solution {
  public:
    int counting(int rank, int n, int t){
        int sum = 0;
        int cnt = 0;
        while((sum + (rank * (cnt + 1))) <= t){
            cnt++;
            sum += (rank * cnt);
        }
        return cnt;
    }
    bool fun(vector<int>& ranks, int t, int n){
        int cnt = 0;
        for(int r: ranks){
            cnt += counting(r, n, t);
            if(cnt >= n) return true;
        }
        return false;
    }
    int minTime(vector<int>& ranks, int n) {
        // code here
        long long left = *min_element(ranks.begin(), ranks.end());
        long long right = INT_MAX;
        long long res = INT_MAX;
        while(left <= right){
            long long mid = left + (right - left) / 2;
            if(fun(ranks, mid, n)){
                res = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return res;
    }
};