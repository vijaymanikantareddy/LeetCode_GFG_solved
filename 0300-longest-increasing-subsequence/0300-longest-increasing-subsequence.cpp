class Solution {
public:
    int findPosition(vector<int>& v, int num){
        int i = 0, j = v.size();
        while(i < j){
            int mid = i + (j-i)/2;
            if(v[mid] == num){
                return mid;
            }else if(v[mid] < num){
                i = mid+1;
            }else{
                j = mid;
            }
        }
        return i;
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<int> v;
        int res = 1;
        v.push_back(nums[0]);
        for(int i = 1 ; i < nums.size() ; i++){
            if(v.back() < nums[i]){
                v.push_back(nums[i]);
                res++;
            }else{
                int ind = findPosition(v, nums[i]);
                v[ind] = nums[i];
            }
        }
        return v.size();
    }
};