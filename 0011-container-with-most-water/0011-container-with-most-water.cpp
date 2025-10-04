class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;
        int i = 0, j = height.size()-1;
        while(i < j){
            int minH = min(height[i], height[j]);
            int width = j - i;
            res = max(res, minH * width);
            // cout << minH << " " << width << " " << res << endl;
            if(height[i] < height[j]){
                i++;
            }else{
                j--;
            }
        }
        return res;
    }
};