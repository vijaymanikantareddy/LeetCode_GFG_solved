class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        map<int, int> mp;
        int mx = -1;
        for(auto it: target){
            mp[it]++;
            mx = mx < it? it: mx;
        }
        vector<string> res;
        for(int i = 1; i <= mx ; i++){
            if(mp.find(i) != mp.end()){
                res.push_back("Push");
            }else{
                res.push_back("Push");
                res.push_back("Pop");
            }
        }
        return res;
    }
};