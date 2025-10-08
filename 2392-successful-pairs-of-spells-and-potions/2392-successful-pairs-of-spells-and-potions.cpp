class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> res;
        sort(potions.begin(), potions.end());
        for(int i = 0 ; i < spells.size() ; i++){
            int l = 0, r = potions.size()-1;
            int firstStrong = potions.size();
            while(l <= r){
                int m = (l+r)/2;
                if((long long)spells[i] * (long long)potions[m] >= success){
                    r = m-1;
                    firstStrong = m;
                }else{
                    l = m+1;
                }
            }
            res.push_back(potions.size()-firstStrong);
        }
        return res;
    }
};