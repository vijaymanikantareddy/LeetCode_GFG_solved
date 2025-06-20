class Solution {
  public:
    bool validgroup(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if(k == 1) return true;
        if(n%k != 0) return false;
        map<int, int> mp;
        for(auto it: arr) mp[it]++;
        while(!mp.empty()){
            int num = mp.begin()->first;
            
            for(int i = 0 ; i < k ; i++){
                if(mp.find(num + i) == mp.end()) return false;
                
                mp[num + i]--;
                if(mp[num + i] == 0) mp.erase(num + i);
            }
        }
        return true;
    }
};