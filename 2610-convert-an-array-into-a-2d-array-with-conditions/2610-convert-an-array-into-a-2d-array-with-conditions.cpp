class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> v(201, 0);
        int cnt = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            v[nums[i]]++;
            cnt++;
        }
        vector<vector<int>> res;
        while(cnt > 0){
            vector<int> temp;
            for(int i = 0 ; i <= 200 ; i++){
                if(v[i] > 0){
                    temp.push_back(i);
                    v[i]--;
                    cnt--;
                }
            }   
            res.push_back(temp);
        }
        return res;
    }
};