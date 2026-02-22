class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int a = 0, b = 0;
        int p = 1;
        vector<int> ap, bp;
        for(int i = 0 ; i < nums.size() ; i++){
            if( ((i+1 ) % 6 == 0 )){
                p = !p;
            }
            if(nums[i] % 2 != 0){
                p=!p;
            }
            if(p){
                a += nums[i];
                ap.push_back(nums[i]);
            }else{
                b += nums[i];
                bp.push_back(nums[i]);
            }
        }
        for(auto it: ap) cout << it << " ";
        cout << endl;
        for(auto it: bp) cout << it << " ";
        
        return a - b;
    }
};