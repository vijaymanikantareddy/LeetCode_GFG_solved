class Solution {
  public:
    string firstNonRepeating(string &s) {
        // code here
        map<char, int> mp;
	    queue<char> q;
	    string ans = "";
	    for(char ch: s){
	        if(mp.find(ch) == mp.end()){
	            mp[ch]++;
	            q.push(ch);
	        }else{
	            mp[ch]++;
	            while(!q.empty() && mp[q.front()] != 1){
	                q.pop();
	            }
	        }
	        
	        ans += q.size()? q.front(): '#';
	    }
	    return ans;
    }
};