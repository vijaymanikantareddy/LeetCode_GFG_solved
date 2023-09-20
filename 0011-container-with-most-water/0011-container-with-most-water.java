class Solution {
    public int min(int a, int b){
        return a < b? a: b;
    }
    public int maxArea(int[] height) {
        int mx=0, area, i=0, j=height.length-1;
        while(i<j){
            area = min(height[i], height[j])*Math.abs(i-j);
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
}