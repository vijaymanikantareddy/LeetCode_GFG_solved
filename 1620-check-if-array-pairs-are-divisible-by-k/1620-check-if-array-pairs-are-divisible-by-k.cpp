class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> fre(k, 0);
        for(auto it: arr){
            fre[((it%k)+k)%k]++;
        }
        for(int i = 1 ; i < k ; i++){
            if(fre[i] != fre[k-i]){
                return false;
            }
        }
        if(fre[0]%2 != 0) return false;
        return true;
    }
};