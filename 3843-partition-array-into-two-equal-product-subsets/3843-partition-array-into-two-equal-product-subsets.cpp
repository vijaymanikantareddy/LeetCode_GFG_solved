class Solution {
public:
    bool result = false;
    void fun(vector<int>& nums, long long target, int index, unsigned long long first, unsigned long long second){
        if(index >= nums.size()){
            if(first == target && second == target) 
                result = true;
            return ;
        }
        if(result) return ;
        fun(nums, target, index + 1, first * (unsigned long long) nums[index], second);
        fun(nums, target, index + 1, first, second * (unsigned long long) nums[index]);
    }
    bool checkEqualPartitions(vector<int>& nums, long long target) {
        
        fun(nums, target, 0, (unsigned long long) 1, (unsigned long long) 1);
        return result;
    }
};