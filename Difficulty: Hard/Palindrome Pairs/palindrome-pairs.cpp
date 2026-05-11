class Solution {
  public:
    bool ispalin(string s, int l, int r){
        while(l <= r){
            if(s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    bool palindromePair(vector<string>& arr) {
        // Code here
        unordered_map<string, int> mp;
        
        for(int i = 0 ; i < arr.size() ; i++){
            mp[arr[i]] = i;
        }
        for(int i = 0 ; i < arr.size() ; i++){
            string s = arr[i];
            int n = s.size();
            
            for(int j = 0 ; j < n ; j++){
                string left = s.substr(0, j);
                string right = s.substr(j);
                
                if(ispalin(s, 0, j - 1)){
                    string revRight = right;
                    reverse(revRight.begin(), revRight.end());
                    
                    if(mp.count(revRight) && mp[revRight] != i){
                        return true;
                    }
                }
                
                if(ispalin(s, j, n - 1)){
                    string revLeft = left;
                    reverse(revLeft.begin(), revLeft.end());
                    
                    if(j != n && mp.count(revLeft) && mp[revLeft] != i){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};