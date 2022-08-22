class Solution {
public:
    string defangIPaddr(string address) {
        string res;
        for(char i: address){
            if(i=='.'){
                res += "[.]";
            }
            else{
                res+=i;
            }
        }
        return res;
    }
};