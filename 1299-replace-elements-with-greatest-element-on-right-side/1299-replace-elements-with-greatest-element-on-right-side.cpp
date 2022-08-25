class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> res(arr.size(),-1);
        int mx=-1;
        for(int i = arr.size()-1 ; i>0 ; i--){
            if(arr[i]>mx){
                mx = arr[i];
            }
            res[i-1] = mx;
        }
        return res;
    }
};