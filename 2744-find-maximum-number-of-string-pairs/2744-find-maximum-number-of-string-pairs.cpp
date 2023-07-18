class Solution {
public:
    string rev(string s){
        int i = 0, j = s.size()-1;
        while(i < j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
        return s;
    }
    int maximumNumberOfStringPairs(vector<string>& words) {
        map<string, int> mp;
        for(int i = 0 ; i < words.size() ; i++){
            string a = rev(words[i]);
            if(a != words[i])
                mp[a]++;
        }
        int res = 0;
        for(int i = 0 ; i < words.size() ; i++){
            if(mp.find(words[i]) != mp.end()){
                res++;
            }
        }
        return res/2;
    }
};