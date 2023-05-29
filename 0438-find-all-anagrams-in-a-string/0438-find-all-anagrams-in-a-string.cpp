class Solution {
public:
    bool issim(vector<int>& fre, vector<int> mp){
        for(int i = 0 ; i < 26 ; i++){
            if(mp[i] != fre[i]){
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if(s.size() < p.size()){
            return res;
        }
        vector<int> mp(26, 0);
	    for(int i = 0 ; i < p.size() ; i++){
	        int d = p[i]-'a';
	        mp[d]++;
	    }
	    vector<int> fre(26, 0);
	    int psize = p.size();
	    for(int i = 0 ; i < psize ; i++){
	        fre[s[i]-'a']++;
	    }
	    if(issim(fre, mp)){
	        res.push_back(0);
	    }
	    for(int i = psize ; i < s.size(); i++){
	        fre[s[i-psize] - 'a']--;
	        fre[s[i] - 'a']++;
	        if(issim(fre, mp)){
	            res.push_back(i-psize+1);
	        }
	    }
	    return res;
    }
};