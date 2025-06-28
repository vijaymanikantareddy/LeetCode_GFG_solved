class Solution {
public:
    int secondHighest(string s) {
        set<int> res;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]-'0'<10){
                res.insert(s[i]-'0');
            }
        }
        if(res.empty()) return -1;
        auto it = res.end();
        it--;
        cout << *it;
        if(it == res.begin())
            return -1; 
        else{
            it--;
            return *it;
        }
    }
};