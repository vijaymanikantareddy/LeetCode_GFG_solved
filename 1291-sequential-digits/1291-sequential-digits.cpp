class Solution {
public:
    long long makeString(int n, int start){
        string res = to_string(start);
        for(int i = 1 ; i < n && start+i < 10 ; i++){
            res += to_string(start+i);
        }
        return stoll(res);
    }
    
    vector<int> sequentialDigits(int low, int high) {
        set<int> res;
        int a = to_string(low).size(), b = to_string(high).size();
        for(int i = a ; i <= b ; i++){
            for(int j = 1 ; j <= 9 ; j++){
                long long num = makeString(i, j);
                if(num >= low && num <= high){
                    res.insert(num);
                }
            }
        }
        return vector<int>(res.begin(), res.end());
    }
};