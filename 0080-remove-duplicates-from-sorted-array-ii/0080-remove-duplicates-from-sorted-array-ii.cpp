class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> mp;
        int i = 0, j = nums.size()-1;
        while(i <= j){
            if(mp[nums[i]] < 2){
                mp[nums[i]]++;
                i++;
            }else{
                swap(nums[i], nums[j]);
                j--;
            }
        }
        sort(nums.begin(), nums.begin()+i);
        return i;
    }
};