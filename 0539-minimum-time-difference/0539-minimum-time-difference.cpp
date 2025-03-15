class Solution {
public:
    int fun(string s){
        int hh = stoi(s.substr(0, 2));
        int mm = stoi(s.substr(3, 2));
        return hh*60 + mm;
    }
    int findMinDifference(vector<string>& timePoints) {
        vector<int> a;
        for(auto it: timePoints){
            a.push_back(fun(it));
        }
        sort(a.begin(), a.end());
        int res = INT_MAX;
        for(int i = 1 ; i < a.size(); i++){
            res = min(res, a[i] - a[i - 1]);
        }
        for(int i = 0 ; i < a.size() ; i++){
            a[i] = (a[i] + 600)%1440;
        }
        sort(a.begin(), a.end());
        for(int i = 1 ; i < a.size(); i++){
            res = min(res, a[i] - a[i - 1]);
        }
        return res;
    }
};