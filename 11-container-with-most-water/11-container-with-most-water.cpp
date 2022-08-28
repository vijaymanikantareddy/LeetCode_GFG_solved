class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx=0, area, i=0, j=height.size()-1;
        while(i<j){
            area = min(height[i], height[j])*abs(i-j);
            mx = mx<area? area: mx;
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return mx;
    }
};