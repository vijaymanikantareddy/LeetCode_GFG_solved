class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int cnt = 0;
        vector<bool> placed(n, false);
        for(auto it: fruits){
            bool flag = true;
            for(int i = 0 ; i < n ; i++){
                if(baskets[i] >= it && !placed[i]){
                    placed[i] = true;
                    flag = false;
                    break;
                }
            }
            if(flag) cnt++;
        }
        return cnt;
    }
};