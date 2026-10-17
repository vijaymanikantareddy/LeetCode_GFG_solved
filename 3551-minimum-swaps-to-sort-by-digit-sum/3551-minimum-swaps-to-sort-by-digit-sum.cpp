class Solution {
public:
    int fun(int n){
        int s = 0;
        while(n > 0){
            s += (n % 10);
            n /= 10;
        }
        return s;
    }
    int minSwaps(vector<int>& nums) {
        vector<pair<int, int>> arr;
        for(int i = 0 ; i < nums.size() ; i++){
            arr.push_back({nums[i], i});
        }
        sort(arr.begin(), arr.end(), [&](const auto &a, const auto &b){
            int sa = fun(a.first);
            int sb = fun(b.first);
            if(sa == sb){
                return a.first < b.first;
            }
            return sa < sb;
        });
        int res = 0;
        int i = 0;
        int n = arr.size();
        while(i < n){
            if(arr[i].second != i){
                swap(arr[i], arr[arr[i].second]);
                res++;
            }else{
                i++;
            }
        }
        return res;
    }
};