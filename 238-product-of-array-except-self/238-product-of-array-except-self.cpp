class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(),0);
        int temp=1;
        for(int i=0 ; i<nums.size() ; i++){
            res[i]=temp;
            temp*=nums[i];
        }
        temp=1;
        for(int i=nums.size()-1 ; i>=0 ; i--){
            res[i]*=temp;
            temp*=nums[i];
        }
        return res;
    }
};