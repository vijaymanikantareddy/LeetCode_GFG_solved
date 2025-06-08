class Solution {
public:
    bool canMakeEqual(vector<int>& nums, int k) {
        vector<int> temp = nums;
        int cnt = 0;
        for(int i = 0 ; i < temp.size()-1 ; i++){
            if(temp[i] != 1){
                temp[i] *= -1;
                temp[i + 1] *= -1;
                cnt++;
            }
        }
        if(cnt <= k && temp.back() == 1) return true;

        temp = nums;
        cnt = 0;
        for(int i = 0 ; i < temp.size()-1 ; i++){
            if(temp[i] != -1){
                temp[i] *= -1;
                temp[i + 1] *= -1;
                cnt++;
            }
        }
        if(cnt <= k && temp.back() == -1) return true;
        
        return false;
    }
};