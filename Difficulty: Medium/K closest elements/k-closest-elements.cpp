class Solution {
  public:
    static bool cmp(pair<int, int> a, pair<int, int> b){
        if(a.first == b.first) return (a.second > b.second);
        return (a.first < b.first);
    }
    vector<int> printKClosest(vector<int> arr, int k, int x) {
        // Code here
        int l = 0, r = arr.size() - 1;
        bool flag = false;
        for(int it: arr) if(it == x){
            flag = true;
            break;
        }
        if(flag) k++;
        while(r - l >= k){
            if(abs(arr[l] - x) >= abs(arr[r] - x)){
                l++;
            }else{
                r--;
            }
        }
        vector<pair<int, int>> vc;
        for(int i = l ; i <= r; i++){
            if(arr[i] - x == 0) continue;
            vc.push_back({abs(arr[i] - x), arr[i]});
        }
        sort(vc.begin(), vc.end(), cmp);
        // for(auto it: vc) cout << it.first << " " << it.second << endl;
        vector<int> res;
        for(auto it: vc) res.push_back(it.second);
        return res;
    }
};