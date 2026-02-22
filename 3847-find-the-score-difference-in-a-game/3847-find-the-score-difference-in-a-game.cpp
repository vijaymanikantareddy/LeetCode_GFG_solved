class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int a = 0, b = 0;
        int p = 1;
        for(int i = 0 ; i < nums.size() ; i++){
            if( ((i+1 ) % 6 == 0 )){
                p = !p;
            }
            if(nums[i] % 2 != 0){
                p=!p;
            }
            if(p){
                a += nums[i];
            }else{
                b += nums[i];
            }
        }
       
        return a - b;
    }
};