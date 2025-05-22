class Solution {
  public:
    int solve(int n, string s) {
        // code here
        vector<int> mp(26, 0);
        int res = 0, occupied = 0;
        for(auto it: s){
            int d = it - 'A';
            if(mp[d] == 0){
                mp[d] = 1;
                if(occupied < n){
                    mp[d] = 2;
                    occupied++;
                }else{
                    res++;
                }
            }
            else{
                if(mp[d] == 2){
                    occupied--;
                }
            }
        }
        return res;
    }
};
