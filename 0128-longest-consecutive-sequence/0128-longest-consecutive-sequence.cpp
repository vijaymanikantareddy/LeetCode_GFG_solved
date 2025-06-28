class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        set<int> se(nums.begin(), nums.end());
        int res = 1, cnt = 1;
        // without converting set into vector
        auto it = se.begin();
        int prev = *it;
        it++;
        while(it != se.end()){
            if(*it == prev + 1){
                cnt++;
                res = max(res, cnt);
            }else{
                cnt = 1;
            }
            prev = *it;
            it++;
        }
        // converting set into vector.
        // vector<int> v(se.begin(), se.end());
        // for(int i = 1 ; i < v.size() ; i++){
        //     if(v[i] == v[i - 1] + 1){
        //         cnt++;
        //         res = max(res, cnt);
        //     }else{
        //         cnt = 1;
        //     }
        // }
        return res;
    }
};