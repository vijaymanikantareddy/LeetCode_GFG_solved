class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        res.push_back(0);
        for(int i = 1 ; i <= n ; i++){
            if(i%2 != 0){
                res.push_back(res[i/2] + 1);
            }else{
                res.push_back(res[i/2]);
            }
        }
        return res;
    }
};