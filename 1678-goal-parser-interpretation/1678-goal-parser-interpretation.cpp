class Solution {
public:
    string interpret(string command) {
        string res;
        for(int i=0 ; i<command.size() ; i++){
            if(command[i]=='(' and command[i+1]==')'){
                res.push_back('o');
            }
            else if(command[i]==')')
                continue;
            else if(command[i]!='('){
                res.push_back(command[i]);
            }
        }
        return res;
    }
};