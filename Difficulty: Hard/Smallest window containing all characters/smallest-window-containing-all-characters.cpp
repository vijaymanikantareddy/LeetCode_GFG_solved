class Solution {
  public:
    bool fun(vector<int>& smp, vector<int>& pmp){
        for(int i = 0 ; i < 256 ; i++){
            if(smp[i] < pmp[i]) return false;
        }
        return true;
    }
    string smallestWindow(string &s, string &p) {
        // code here
        if(p.size() > s.size()) return "";
        vector<int> smp(256, 0), pmp(256, 0);
        for(char it: p){
            pmp[it]++;
        } 

        int i = 0, j = 0;
        long long minLen = INT_MAX;
        int start;
        while(j < s.size()){
           smp[s[j]]++;
            
            while(i <= j && fun(smp, pmp)){
                if(j - i + 1 < minLen){
                    minLen = j - i + 1;
                    start = i;
                }
                smp[s[i]]--;
                i++;
            }
            j++;
        }
        return minLen == INT_MAX? "": s.substr(start, minLen);
    }
};