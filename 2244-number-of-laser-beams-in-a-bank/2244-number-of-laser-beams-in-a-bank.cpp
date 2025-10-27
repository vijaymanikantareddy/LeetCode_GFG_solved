class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        if(bank.size()==1)  return 0;
        vector<int> ve;
        for(int i=0 ; i<bank.size() ; i++){
            int cnt=0;
            for(int j=0 ; j<bank[i].size() ; j++){
                if(bank[i][j]=='1'){
                    cnt++;
                }
            }
            if(cnt>0){
                ve.push_back(cnt);
            }
        }
        if(ve.size()<=1)
            return 0;
        int result=0;
        for(int i=0 ; i<ve.size()-1 ; i++){
            result += ve[i]*ve[i+1];
        }
        return result;
    }
};