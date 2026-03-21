class Solution {
  public:
    vector<int> cat;
    void genCat(int n){
        cat.resize(n);
        cat[0] = cat[1] = 1;
        for(int i = 2 ; i < 16 ; i++){
            cat[i] = 0;
            for(int j = 0 ; j < i ; j++){
                cat[i] += cat[j] * cat[i - j - 1];
            }
        }
    }
    vector<int> countBSTs(vector<int>& arr) {
        // Code here
        genCat(16);
        vector<int> res;
        for(int i = 0 ; i < arr.size() ; i++){
            int l = 0, r = 0;
            for(int j = 0 ; j < arr.size() ; j++){
                if(arr[j] < arr[i]) l++;
                else if(arr[j] > arr[i]) r++;
            }
            res.push_back(cat[l] * cat[r]);
        }
        return res;
    }
};