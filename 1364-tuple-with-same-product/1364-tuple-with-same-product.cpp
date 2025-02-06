class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        map<int, int> mp;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i+1 ; j < nums.size() ; j++){
                mp[nums[i]*nums[j]]++;
            }
        }
        int res = 0;
        for(auto it: mp){
            // cout << it.first << " " << it.second << endl;
            if(it.second > 1){
                int a = it.second;
                res += 8*(a*(a-1)/2);
            }
        }
        return res;
    }
};