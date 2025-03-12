class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int a = 0, b =0;
        for(int ele : nums){
            if(ele>0) a++;
            if(ele<0) b++;
        }
        return a>b? a : b;
    }
};