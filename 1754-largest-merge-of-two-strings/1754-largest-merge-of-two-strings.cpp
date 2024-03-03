class Solution {
public:
    int fun(string a, string b, int i, int j){
        while(i < a.size() && j < b.size()){
            if(a[i] > b[j]) return 0;
            if(a[i] < b[j]) return 1;
            i++;
            j++;
        }
        if(i >= a.size()) return 1;
        return 0;
    }
    string largestMerge(string word1, string word2) {
        string res = "";
        int i = 0, j = 0, m = word1.size(), n = word2.size();
        while(i < m && j < n){
            if(word1[i] > word2[j]){
                res.push_back(word1[i++]);
            }
            else if(word2[j] > word1[i]){
                res.push_back(word2[j++]);
            }else{
                int c = fun(word1, word2, i, j);
                if(c == 0){
                    res.push_back(word1[i++]);
                }else{
                    res.push_back(word2[j++]);
                }
            }
        }
        while(i < m) res.push_back(word1[i++]);
        while(j < n) res.push_back(word2[j++]);
        return res;
    }
};