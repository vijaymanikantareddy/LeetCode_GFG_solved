class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size()) return false;
        if(s == goal){
            set<char> temp(goal.begin(), goal.end());
            return temp.size() < goal.size();
        }
        int cnt = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] != goal[i]){
                cnt++;
            }
        }
        sort(s.begin(), s.end());
        sort(goal.begin(), goal.end());
        if(s != goal) return false;
        return cnt == 2;
    }
};