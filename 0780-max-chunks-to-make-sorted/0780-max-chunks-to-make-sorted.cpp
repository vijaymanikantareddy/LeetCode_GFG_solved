class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int cnt = 0;
        int mx = arr[0];
        for(int i = 0 ; i < arr.size() ; i++){
            mx = max(arr[i], mx);
            if(mx == i){
                cnt++;
            }
        }
        return cnt;
    }
};