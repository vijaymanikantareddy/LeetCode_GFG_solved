class Solution {
public:
    bool checkValidString(string s) {
        stack<int> open, star;
        for(int i = 0 ; i < s.size() ; i++){ //balancing closing brackets
            if(s[i] == '('){
                open.push(i);
            }else if(s[i] == '*'){
                star.push(i);
            }else{
                if(!open.empty()){
                    open.pop();
                }else if(!star.empty()){
                    star.pop();
                }else{
                    return false;
                }
            }
        }
        
        while(!open.empty()){ //Balancing Open Brackets
            if(star.empty()) return false;
            int opentop = open.top();
            int startop = star.top();
            if(opentop > startop){
                return false;
            }
            open.pop();
            star.pop();
        }
        return true;
    }
};