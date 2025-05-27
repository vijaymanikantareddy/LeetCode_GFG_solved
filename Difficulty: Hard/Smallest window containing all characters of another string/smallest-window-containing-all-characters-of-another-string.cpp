class Solution {
  public:
    // Function to find the smallest window in the string s1 consisting
    // of all the characters of string s2.
     bool fun(vector<int>& s1mp, vector<int>& s2mp){
        for(int i = 0 ; i < 256 ; i++){
            if(s1mp[i] < s2mp[i]) return false;
        }
        return true;
    }
    
    string smallestWindow(string &s1, string &s2) {
        // Your code here
        if(s2.size() > s1.size()) return "";
        vector<int> s1mp(256, 0), s2mp(256, 0);
        for(char it: s2){
            s2mp[it]++;
        } 

        int i = 0, j = 0;
        long long minLen = INT_MAX;
        int start;
        while(j < s1.size()){
           s1mp[s1[j]]++;
            
            while(i <= j && fun(s1mp, s2mp)){
                if(j - i + 1 < minLen){
                    minLen = j - i + 1;
                    start = i;
                }
                s1mp[s1[i]]--;
                i++;
            }
            j++;
        }
        return minLen == INT_MAX? "": s1.substr(start, minLen);
    }
};