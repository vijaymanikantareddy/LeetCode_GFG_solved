class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0 ; i<nums2.size() ; i++)
            nums1.push_back(nums2[i]);
        sort(nums1.begin(), nums1.end());
        int n=nums1.size();
        double median;
        if(nums1.size()%2==0){
            median = (double) (nums1[(n/2)-1]+nums1[n/2])/2;
        }
        else{
            median = nums1[n/2];
        }
        return median;
    }
};