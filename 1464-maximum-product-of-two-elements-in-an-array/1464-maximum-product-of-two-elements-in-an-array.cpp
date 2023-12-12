class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a, b;
        if(nums[0] > nums[1]){
            a = nums[0];
            b = nums[1];
        }else{
            a = nums[1];
            b = nums[0];
        }
        for(int i = 2 ; i < nums.size() ; i++){
            if(nums[i] >= a){
                b = a;
                a = nums[i];
            }
            else if(nums[i] > b){
                b = nums[i];
            }
        }
        return (a-1)*(b-1);
    }
};