class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        unordered_map<char,int>mpp;
        int i=0,j=0,ans=INT_MIN;
        for(int j=0;j<s.size();j++){
            mpp[s[j]]++;
            if(mpp.size()==k)
                ans=max(ans,j-i+1);
            else if(mpp.size()>k){
                while(mpp.size()!=k){
                    mpp[s[i]]--;
                    if(mpp[s[i]]==0) mpp.erase(s[i]);
                    i++;
                }
            }
        }
        return ans==INT_MIN?-1:ans;
    }
};