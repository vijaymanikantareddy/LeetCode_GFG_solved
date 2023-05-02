int maxArea(int* height, int heightSize){
    int mx=0, area, i=0, j=heightSize-1;
    while(i<j){
        int a = height[i]<height[j]? height[i]: height[j];
        area = a*abs(i-j);
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