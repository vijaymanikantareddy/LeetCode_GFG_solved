class Solution {
public:
    int digitcnt(int n){
        if(n==0)
            return 1;
        int cnt = 0;
        while(n){
            cnt++;
            n/=10;
        }
        return cnt;
    }
    int findNumbers(vector<int>& nums) {
        int s=0;
        for(int i=0 ; i<nums.size() ; i++){
            if(digitcnt(nums[i])%2==0)
                s++;
        }
        return s;
    }
};