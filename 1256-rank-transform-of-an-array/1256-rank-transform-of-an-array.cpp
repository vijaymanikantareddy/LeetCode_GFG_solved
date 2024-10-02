class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> mp;
        vector<int> ab = arr;
        sort(ab.begin(), ab.end());
        int rank = 1;
        for(int i = 0 ; i < ab.size() ;i++){
            if(mp[ab[i]] == 0){
                mp[ab[i]] = rank;
                rank++;
            }
        }
        for(int i = 0 ; i < arr.size() ; i++){
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};