class Solution {
public:
    bool fun(vector<int>& bloomDay, int k, int m, int day){
        int cnt = 0;
        int res = 0;
        for(int i = 0 ;  i < bloomDay.size() ; i++){
            if(bloomDay[i] <= day){
                cnt++;
            }else{
                res += (cnt/k);
                cnt = 0;
                
            }
        }
        res += (cnt / k);
        return (res >= m);
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if((long long) n < (long long) m* (long long) k) return -1;
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        while(low <= high){
            int mid = low + (high - low)/2;
            if(fun(bloomDay, k, m, mid)){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};