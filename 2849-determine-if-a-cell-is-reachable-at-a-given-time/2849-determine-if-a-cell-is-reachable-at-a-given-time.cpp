class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(fy == sy && fx == sx && t==1)  return false;
        if((abs(fy-sy)) > t || (abs(fx-sx)) > t)  return false;
        return true;
    }
};