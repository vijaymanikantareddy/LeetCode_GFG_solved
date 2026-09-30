class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> res;
        int d = 0;
        for(char ch: seq){
            if(ch == '('){
                d++;
                res.push_back(d % 2);
            }else{
                res.push_back(d % 2);
                d--;
            }
        }
        return res;
    }
};