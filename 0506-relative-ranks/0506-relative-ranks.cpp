class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> temp = score;
        sort(temp.rbegin(), temp.rend());
        vector<string> res;
        map<int, string> mp;
        for(int i = 0 ; i < temp.size() ; i++){
            if(i < 3){
                if(i == 0){
                    mp[temp[i]] = "Gold Medal";
                }else if(i == 1){
                    mp[temp[i]] = "Silver Medal";
                }else if(i == 2){
                    mp[temp[i]] = "Bronze Medal";
                }
            }else{
                mp[temp[i]] = to_string(i+1);
            }
        }
        for(int i = 0 ; i < score.size(); i++){
            res.push_back(mp[score[i]]);
        }
        return res;
    }
};