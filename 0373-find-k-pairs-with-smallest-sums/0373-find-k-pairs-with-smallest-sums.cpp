class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<vector<int>> pq;
        for(int i = 0 ; i < nums1.size(); i++){
            for(int j = 0 ; j < nums2.size() ; j++){
                int s = nums1[i]+nums2[j];
                if(pq.size() < k){
                    pq.push({s, nums1[i], nums2[j]});
                }else{
                    if(s < pq.top()[0]){
                        pq.pop();
                        pq.push({s, nums1[i], nums2[j]});
                    }else{
                        break;
                    }
                }
            }
        }
        vector<vector<int>> res;
        while(!pq.empty()){
            res.push_back({pq.top()[1], pq.top()[2]});
            pq.pop();
        }
        return res;
    }
};