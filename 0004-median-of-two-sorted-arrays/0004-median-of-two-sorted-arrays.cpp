class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int total = n + m;
        int req = total / 2;
        int curr = 0, prev = 0, i = 0, j = 0, cnt = 0;
        while(i < n && j < m && cnt <= req){
            prev = curr;
            if(nums1[i] <= nums2[j]){
                curr = nums1[i];
                i++;
            }else{
                curr = nums2[j];
                j++;
            }
            cnt++;
        }
        
        while(i < n && cnt <= req){
            prev = curr;
            curr = nums1[i];
            i++;
            cnt++;
        }
        
        while(j < m && cnt <= req){
            prev = curr;
            curr = nums2[j];
            j++;
            cnt++;
        }
        if(total%2 == 0){
            return (double) (curr + prev) / 2.0; 
        }else{
            return curr;
        }
    }
};