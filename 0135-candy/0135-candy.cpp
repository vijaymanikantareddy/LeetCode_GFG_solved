class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> v(ratings.size(), 1);
        for(int i = 0 ; i < ratings.size() ; i++){
            if(i == 0){
                if(i+1 < ratings.size() && ratings[i] > ratings[i+1]){
                    v[i] = v[i+1]+1;
                }
            }
            else{
                if(ratings[i] > ratings[i-1]){
                    v[i] = v[i-1]+1;
                }
            }
        }
        for(int i = ratings.size()-2 ; i > 0 ; i--){
            if(ratings[i] > ratings[i+1] && v[i] <= v[i+1]){
                v[i] = v[i+1]+1;
            }
        }
        if(ratings.size() >= 2 && ratings[0] > ratings[1] && v[0] <= v[1]){
            v[0] = v[1]+1;
        }
        int res = 0;
        for(int i = 0 ; i < v.size() ; i++){
            res += v[i];
        }
        return res;
    }
};