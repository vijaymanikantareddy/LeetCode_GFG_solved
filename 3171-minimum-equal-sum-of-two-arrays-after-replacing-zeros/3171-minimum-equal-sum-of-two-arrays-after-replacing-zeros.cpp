class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long a = 0, b = 0;
        bool fa = false, fb = false;
        for(auto it: nums1){
            if(it == 0) fa = true;
            a += it;
        }
        for(auto it: nums2){
            if(it == 0) fb = true;
            b += it;
        }
        if(!fa && !fb){
            if (a == b) return a;
            return -1;
        }
        for(auto it: nums1) if(it == 0) a++;
        for(auto it: nums2) if(it == 0) b++;
        if(a == b) return a;
        if(fa == false){
            if(b > a) return -1;
        }
        if(fb == false){
            if(a > b) return -1;
        }
        long long di = abs(a - b);
        return min(a, b) + di;
    }
};