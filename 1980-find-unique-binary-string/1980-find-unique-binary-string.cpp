class Solution {
public:
    string fun(int n, int l){
        string s;
        for(int i = 0 ; i < l ; i++){
            if((n&1) == 1){
                s.push_back('1');
            }else{
                s.push_back('0');
            }
            if(n > 0)
                n >>= 1;
        }
        reverse(s.begin(), s.end());
        return s;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_map<string, int> mp;
        for(auto it: nums) mp[it]++;
        int n = nums[0].size();
        for(int i = 0 ; i < pow(2, n); i++){
            string s = fun(i, n);
            if(mp.find(s) == mp.end()){
                return s;
            }
        }
        return "";
    }
};