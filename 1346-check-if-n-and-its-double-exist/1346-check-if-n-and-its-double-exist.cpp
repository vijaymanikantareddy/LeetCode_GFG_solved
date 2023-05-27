class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int ele: arr){
            mp[ele]++;
        }
        for(auto it: mp){
            if(mp.find(it.first*2) != mp.end()){
                if(it.first*2 == it.first){
                    if(mp[it.first] > 1){
                        return true;
                    }
                }else{
                    return true;
                }
            }
        }
        return false;
    }
};