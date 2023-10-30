class Solution {
public:
    int setbits(int n){
        int cnt = 0;
        while(n>0){
            n = n&(n-1);
            cnt++;
        }
        return cnt;
    }
    bool compare(int a, int b){
        int p = setbits(a), q = setbits(b);
        if(p == q){
            return a < b;
        }
        return p < q;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [this](int a, int b){
            return compare(a, b);
        });
        return arr;
    }
};