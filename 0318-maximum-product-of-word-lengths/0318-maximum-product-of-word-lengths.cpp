class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<int> v(words.size(), 0);
        int ans = 0;
        for(int i = 0 ; i < words.size() ; i++){
            for(char ch: words[i]){
                int d = ch-'a';
                v[i] |= 1<<d;
            }
            for(int j = 0 ; j < i ; j++){
                if((v[i]&v[j]) == 0){
                    int pro = words[i].size()*words[j].size();
                    ans = max(pro, ans);
                }
            }
        }
        return ans;
    }
};