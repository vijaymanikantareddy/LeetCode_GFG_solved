class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> leftmax(height.size());
        vector<int> rightmax(height.size());
        int mx = 0;
        for(int i = 0 ; i < height.size() ; i++){
            mx = mx > height[i]? mx: height[i];
            leftmax[i] = mx;
        }
        mx = 0;
        for(int i = height.size()-1 ; i >= 0 ; i--){
             mx = mx > height[i]? mx: height[i];
            rightmax[i] = mx;
        }
        int res = 0;
        for(int i = 0 ; i < height.size() ; i++){
            res += (min(leftmax[i], rightmax[i]) - height[i]);
        }
        return res;
    }
};